// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumCharacterBase.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ThrowableObject.h"

#include "TantrumPlayerController.h"
#include "DrawDebugHelpers.h"

constexpr int CVSphereCastPlayerView = 0;
constexpr int CVSphereCastActorTransform = 1;
constexpr int CVLineCastActorTransform = 2;

//add cvars for debug
static TAutoConsoleVariable<int> CVarTraceMode(
	TEXT("Tantrum.Character.Debug.TraceMode"),
	0,
	TEXT("    0: Sphere cast PlayerView is used for direction/rotation (default).\n")
	TEXT("    1: Sphere cast using ActorTransform \n")
	TEXT("    2: Line cast using ActorTransform \n"),
	ECVF_Default);


static TAutoConsoleVariable<bool> CVarDisplayTrace(
	TEXT("Tantrum.Character.Debug.DisplayTrace"),
	false,
	TEXT("Display Trace"),
	ECVF_Default);

static TAutoConsoleVariable<bool> CVarDisplayThrowVelocity(
	TEXT("Tantrum.Character.Debug.DisplayThrowVelocity"),
	false,
	TEXT("Display Throw Velocity"),
	ECVF_Default);

//need a debug to display the launch vector
//make sure collisions are disabled...

// Sets default values
ATantrumCharacterBase::ATantrumCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATantrumCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	if (GetCharacterMovement())
	{
		MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	}
}

// Called every frame
void ATantrumCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateStun();
	if (bIsStunned)
	{
		return;
	}

	if (CharacterThrowState == ECharacterThrowState::Throwing)
	{
		if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
		{
			if (UAnimMontage* CurrentAnimMontage = AnimInstance->GetCurrentActiveMontage())
			{
				//speed up the playrate when at the throwing part of the animation, as the initial interaction animation wasn't intended as a throw so it's rather slow
				const float PlayRate = AnimInstance->GetCurveValue(TEXT("ThrowCurve"));
				AnimInstance->Montage_SetPlayRate(CurrentAnimMontage, PlayRate);
			}
		}
	}
	//make sure we are in a state that allows to pick up objects
	else if (CharacterThrowState == ECharacterThrowState::None || CharacterThrowState == ECharacterThrowState::RequestingPull)
	{
		switch (CVarTraceMode->GetInt())
		{
		case CVSphereCastPlayerView:
			SphereCastPlayerView();
			break;
		case CVSphereCastActorTransform:
			SphereCastActorTransform();
			break;
		case CVLineCastActorTransform:
			LineCastActorTransform();
			break;
		default:
			SphereCastPlayerView();
			break;
		}
	}
}

// Called to bind functionality to input
void ATantrumCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATantrumCharacterBase::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	//custom landed code
	ATantrumPlayerController* TantrumPlayerController = GetController<ATantrumPlayerController>();
	if (TantrumPlayerController)
	{
		const float FallImpactSpeed = FMath::Abs(GetVelocity().Z);
		if (FallImpactSpeed < MinImpactSpeed)
		{
			//nothing to do, very light fall
			return;
		}
		else
		{
			//SoundCue Triggers
			if (HeavyLandSound && GetOwner())
			{
				FVector CharacterLocation = GetOwner()->GetActorLocation();
				UGameplayStatics::PlaySoundAtLocation(this, HeavyLandSound, CharacterLocation);
			}
		}

		const float DeltaImpact = MaxImpactSpeed - MinImpactSpeed;
		const float FallRatio = FMath::Clamp((FallImpactSpeed - MinImpactSpeed) / DeltaImpact, 0.0f, 1.0f);
		const bool bAffectSmall = FallRatio <= 0.5;
		const bool bAffectLarge = FallRatio > 0.5;
		TantrumPlayerController->PlayDynamicForceFeedback(FallRatio, 0.5f, bAffectLarge, bAffectSmall, bAffectLarge, bAffectSmall);

		if (bAffectLarge)
		{
			OnStunBegin(FallRatio);
		}
	}
}

void ATantrumCharacterBase::RequestSprintStart()
{
	if (!bIsStunned)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}

}
void ATantrumCharacterBase::RequestSprintEnd()
{
	GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
}

void ATantrumCharacterBase::RequestThrowObject()
{
	if (CanThrowObject())
	{
		if (PlayThrowMontage())
		{
			CharacterThrowState = ECharacterThrowState::Throwing;
		}
		else
		{
			ResetThrowableObject();
		}
	}
}

void ATantrumCharacterBase::RequestPullObject()
{
	//make sure we are in idle
	if (!bIsStunned && CharacterThrowState == ECharacterThrowState::None)
	{
		CharacterThrowState = ECharacterThrowState::RequestingPull;
		UE_LOG(LogTemp, Warning, TEXT("Character Requesting Pull"));
	}
}

void ATantrumCharacterBase::RequestStopPullObject()
{
	//if was pulling an object, drop it
	if (CharacterThrowState == ECharacterThrowState::RequestingPull)
	{
		CharacterThrowState = ECharacterThrowState::None;
		//ResetThrowableObject();
	}
}

void ATantrumCharacterBase::ResetThrowableObject()
{
	//drop object
	if (ThrowableObject)
	{
		ThrowableObject->Drop();
	}
	CharacterThrowState = ECharacterThrowState::None;
	ThrowableObject = nullptr;
}

void ATantrumCharacterBase::OnThrowableAttached(AThrowableObject* InThrowableActor)
{
	CharacterThrowState = ECharacterThrowState::Attached;
	ThrowableObject = InThrowableActor;
	MoveIgnoreActorAdd(ThrowableObject);
}

void ATantrumCharacterBase::SphereCastPlayerView()
{
	FVector Location;
	FRotator Rotation;
	GetController()->GetPlayerViewPoint(Location, Rotation);
	const FVector PlayerViewForward = Rotation.Vector();
	const float AdditionalDistance = (Location - GetActorLocation()).Size();
	FVector EndPos = Location + (PlayerViewForward * (1000.0f + AdditionalDistance));

	const FVector CharacterForward = GetActorForwardVector();
	const float DotResult = FVector::DotProduct(PlayerViewForward, CharacterForward);
	//prevent picking up objects behind us, this is when the camera is looking directly at the characters front side
	if (DotResult < -0.23f)
	{
		if (ThrowableObject)
		{
			ThrowableObject->ToggleHighlight(false);
			ThrowableObject = nullptr;
		}
		UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: DotResult < -0.23f, ignoring objects behind."));
		return;
		//UE_LOG(LogTemp, Warning, TEXT("Dot Result: %f"), DotResult);
	}

	FHitResult HitResult;
	EDrawDebugTrace::Type DebugTrace = CVarDisplayTrace->GetBool() ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	UKismetSystemLibrary::SphereTraceSingle(GetWorld(), Location, EndPos, 70.0f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, ActorsToIgnore, DebugTrace, HitResult, true);
	if (HitResult.bBlockingHit)
	{
		AThrowableObject* HitObject = Cast<AThrowableObject>(HitResult.GetActor());
		if (HitObject)
		{
			//UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: Detected ThrowableObject: %s"), *HitObject->GetName());
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: Hit object is not a ThrowableObject. Hit: %s"), *HitResult.GetActor()->GetName());
		}
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: No object detected."));
	}
	AThrowableObject* HitObject = Cast<AThrowableObject>(HitResult.GetActor());
	if (HitObject)
	{
		ThrowableObject = HitObject;
		ThrowableObject->ToggleHighlight(true);
		UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: Detected and assigned ThrowableObject: %s"), *HitObject->GetName());
	}
	else
	{
		if (ThrowableObject)
		{
			ThrowableObject->ToggleHighlight(false);
			ThrowableObject = nullptr;
		}
		UE_LOG(LogTemp, Warning, TEXT("SphereCastPlayerView: No ThrowableObject detected or hit object is not a ThrowableObject."));
	}
	ProcessTraceResult(HitResult);

#if ENABLE_DRAW_DEBUG
	if (CVarDisplayTrace->GetBool())
	{
		static float FovDeg = 90.0f;
		DrawDebugCamera(GetWorld(), Location, Rotation, FovDeg);
		DrawDebugLine(GetWorld(), Location, EndPos, HitResult.bBlockingHit ? FColor::Red : FColor::White);
		DrawDebugPoint(GetWorld(), EndPos, 70.0f, HitResult.bBlockingHit ? FColor::Red : FColor::White);
	}
#endif

}

void ATantrumCharacterBase::SphereCastActorTransform()
{
	FVector StartPos = GetActorLocation();
	FVector EndPos = StartPos + (GetActorForwardVector() * 1000.0f);

	//sphere trace
	EDrawDebugTrace::Type DebugTrace = CVarDisplayTrace->GetBool() ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
	FHitResult HitResult;
	UKismetSystemLibrary::SphereTraceSingle(GetWorld(), StartPos, EndPos, 70.0f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, TArray<AActor*>(), DebugTrace, HitResult, true);
	
	if (HitResult.bBlockingHit)
	{
		AThrowableObject* HitObject = Cast<AThrowableObject>(HitResult.GetActor());
		if (HitObject)
		{
			UE_LOG(LogTemp, Warning, TEXT("SphereCastActorTransform: Detected ThrowableObject: %s"), *HitObject->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SphereCastActorTransform: Hit object is not a ThrowableObject. Hit: %s"), *HitResult.GetActor()->GetName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SphereCastActorTransform: No object detected."));
	}

	ProcessTraceResult(HitResult);
}

void ATantrumCharacterBase::LineCastActorTransform()
{

	FVector StartPos = GetActorLocation();
	FVector EndPos = StartPos + (GetActorForwardVector() * 1000.0f);
	FHitResult HitResult;
	bool bHit = GetWorld() ? GetWorld()->LineTraceSingleByChannel(HitResult, StartPos, EndPos, ECollisionChannel::ECC_Visibility) : false;
#if ENABLE_DRAW_DEBUG
	if (CVarDisplayTrace->GetBool())
	{
		DrawDebugLine(GetWorld(), StartPos, EndPos, HitResult.bBlockingHit ? FColor::Red : FColor::White, false);
	}
#endif
	if (bHit)
	{
		AThrowableObject* HitObject = Cast<AThrowableObject>(HitResult.GetActor());
		if (HitObject)
		{
			UE_LOG(LogTemp, Warning, TEXT("LineCastActorTransform: Detected ThrowableObject: %s"), *HitObject->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("LineCastActorTransform: Hit object is not a ThrowableObject. Hit: %s"), *HitResult.GetActor()->GetName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LineCastActorTransform: No object detected."));
	}


	ProcessTraceResult(HitResult);
}

void ATantrumCharacterBase::ProcessTraceResult(const FHitResult& HitResult)
{
	//check if there was an existing throwable actor
	//remove the hightlight to avoid wrong feedback 
	AThrowableObject* HitThrowableObject = HitResult.bBlockingHit ? Cast<AThrowableObject>(HitResult.GetActor()) : nullptr;
	const bool IsSameActor = (ThrowableObject == HitThrowableObject);
	const bool IsValidTarget = ThrowableObject && ThrowableObject->IsIdle();
	const bool IsCharacterReadyToPull = CharacterThrowState == ECharacterThrowState::RequestingPull;
	
	// Debug logs
	//if (HitThrowableObject)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: ThrowableObject state is %d"), static_cast<int>(HitThrowableObject->GetState()));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Hit result did not yield a ThrowableObject."));
	//}

	//UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: IsValidTarget: %s, IsCharacterReadyToPull: %s"),
	//	IsValidTarget ? TEXT("True") : TEXT("False"),
	//	IsCharacterReadyToPull ? TEXT("True") : TEXT("False"));

	//// Additional logs to investigate the issues
	//UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: ThrowableObject is %s, IsSameActor: %s"),
	//	ThrowableObject ? TEXT("Non-null") : TEXT("Null"),
	//	IsSameActor ? TEXT("True") : TEXT("False"));

	//clean up old actor
	if (ThrowableObject)
	{
		if (!IsValidTarget || !IsSameActor)
		{
			ThrowableObject->ToggleHighlight(false);
			ThrowableObject = nullptr;
			UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Existing throwable object cleared."));
		}
	}

	if (IsValidTarget)
	{
		if (!ThrowableObject)
		{
			ThrowableObject = HitThrowableObject;
			ThrowableObject->ToggleHighlight(true);
			UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: New throwable object highlighted: %s"), *ThrowableObject->GetName());
		}
	}

	if (CharacterThrowState == ECharacterThrowState::RequestingPull)
	{
		//don't allow for pulling objects while running/jogging
		if (GetVelocity().SizeSquared() < 100.0f)
		{
			if (ThrowableObject)
			{
				UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Attempting to pull object: %s"), *ThrowableObject->GetName());
				if (ThrowableObject->Pull(this))
				{
					CharacterThrowState = ECharacterThrowState::Pulling;
					ThrowableObject = nullptr;
					UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Pull action initiated on object."));
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Failed to initiate pull on object."));
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ProcessTraceResult: Cannot pull object while moving."));
		}
	}
}

bool ATantrumCharacterBase::PlayThrowMontage()
{
	const float PlayRate = 1.0f;
	bool bPlayedSuccessfully = PlayAnimMontage(ThrowMontage, PlayRate) > 0.f;
	if (bPlayedSuccessfully)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		if (!BlendingOutDelegate.IsBound())
		{
			BlendingOutDelegate.BindUObject(this, &ATantrumCharacterBase::OnMontageBlendingOut);
		}
		AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, ThrowMontage);

		if (!MontageEndedDelegate.IsBound())
		{
			MontageEndedDelegate.BindUObject(this, &ATantrumCharacterBase::OnMontageEnded);
		}
		AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, ThrowMontage);

		AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &ATantrumCharacterBase::OnNotifyBeginReceived);
		AnimInstance->OnPlayMontageNotifyEnd.AddDynamic(this, &ATantrumCharacterBase::OnNotifyEndReceived);

	}

	return bPlayedSuccessfully;
}

void ATantrumCharacterBase::UnbindMontage()
{
	if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
	{
		AnimInstance->OnPlayMontageNotifyBegin.RemoveDynamic(this, &ATantrumCharacterBase::OnNotifyBeginReceived);
		AnimInstance->OnPlayMontageNotifyEnd.RemoveDynamic(this, &ATantrumCharacterBase::OnNotifyEndReceived);
	}
}

void ATantrumCharacterBase::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{

}

void ATantrumCharacterBase::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UnbindMontage();
	CharacterThrowState = ECharacterThrowState::None;
	MoveIgnoreActorRemove(ThrowableObject);
	if (ThrowableObject->GetRootComponent())
	{
		UPrimitiveComponent* RootPrimitiveComponent = Cast<UPrimitiveComponent>(ThrowableObject->GetRootComponent());
		if (RootPrimitiveComponent)
		{
			RootPrimitiveComponent->IgnoreActorWhenMoving(this, false);
		}
	}
	ThrowableObject = nullptr;
}

void ATantrumCharacterBase::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	//ignore collisions otherwise the throwable object hits the player capsule and doesn't travel in the desired direction
	if (ThrowableObject->GetRootComponent())
	{
		UPrimitiveComponent* RootPrimitiveComponent = Cast<UPrimitiveComponent>(ThrowableObject->GetRootComponent());
		if (RootPrimitiveComponent)
		{
			RootPrimitiveComponent->IgnoreActorWhenMoving(this, true);
		}
	}
	//const FVector& Direction = GetMesh()->GetSocketRotation(TEXT("ObjectAttach")).Vector() * -ThrowSpeed;
	const FVector& Direction = GetActorForwardVector() * ThrowSpeed;
	ThrowableObject->Launch(Direction);

	if (CVarDisplayThrowVelocity->GetBool())
	{
		const FVector& Start = GetMesh()->GetSocketLocation(TEXT("ObjectAttach"));
		DrawDebugLine(GetWorld(), Start, Start + Direction, FColor::Red, false, 5.0f);
	}
}

void ATantrumCharacterBase::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{

}

void ATantrumCharacterBase::OnStunBegin(float StunRatio)
{
	if (bIsStunned)
	{
		//for now just early exit, alternative option would be to add to the stun time
		return;
	}

	const float StunDelt = MaxStunTime - MinStunTime;
	StunTime = MinStunTime + (StunRatio * StunDelt);
	StunBeginTimestamp = FApp::GetCurrentTime();
	bIsStunned = true;
	if (bIsSprinting)
	{
		RequestSprintEnd();
	}
	GetMesh();
}

void ATantrumCharacterBase::UpdateStun()
{
	if (bIsStunned)
	{
		bIsStunned = (FApp::GetCurrentTime() - StunBeginTimestamp) < StunTime;
		if (!bIsStunned)
		{
			OnStunEnd();
		}
	}
}

void ATantrumCharacterBase::OnStunEnd()
{
	StunBeginTimestamp = 0.0f;
	StunTime = 0.0f;
}
