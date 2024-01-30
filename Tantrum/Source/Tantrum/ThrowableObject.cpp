// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableObject.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TantrumCharacterBase.h"

// Sets default values
AThrowableObject::AThrowableObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	RootComponent = StaticMeshComponent;

	// Disable gravity
	StaticMeshComponent->SetEnableGravity(false);

	// Make sure the object starts without any movement
	StaticMeshComponent->SetPhysicsLinearVelocity(FVector::ZeroVector);
	StaticMeshComponent->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);

}

bool AThrowableObject::IsIdle() const
{
	UE_LOG(LogTemp, Warning, TEXT("IsIdle: Object State is %d"), static_cast<int>(State));
	return State == EState::Idle;
}

// Called when the game starts or when spawned
void AThrowableObject::BeginPlay()
{
	Super::BeginPlay();
	ProjectileMovementComponent->OnProjectileStop.AddDynamic(this, &AThrowableObject::ProjectileStop);
}

void AThrowableObject::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ProjectileMovementComponent->OnProjectileStop.RemoveDynamic(this, &AThrowableObject::ProjectileStop);
	Super::EndPlay(EndPlayReason);
}

void AThrowableObject::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Ignore if the object is not in Pull state or already attached
	if (State != EState::Pull)
	{
		return;
	}

	// Check if the object that was hit is the actor that is pulling this object
	if (PullActor && Other == PullActor)
	{
		ATantrumCharacterBase* TantrumCharacter = Cast<ATantrumCharacterBase>(PullActor);
		if (TantrumCharacter)
		{
			// Attach this object to the pulling actor
			AttachToComponent(TantrumCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("ObjectAttach"));
			SetOwner(TantrumCharacter);
			ProjectileMovementComponent->Deactivate();
			State = EState::Attached;

			// Notify the character that the object has been attached
			TantrumCharacter->OnThrowableAttached(this);
		}
	}
	else
	{
		// If the object hit something else, consider it dropped
		if (State == EState::Pull)
		{
			if (ATantrumCharacterBase* TantrumCharacter = Cast<ATantrumCharacterBase>(PullActor))
			{
				TantrumCharacter->ResetThrowableObject();
			}
			State = EState::Dropped;
		}
	}

	// Clear the homing target and pull actor
	ProjectileMovementComponent->HomingTargetComponent = nullptr;
	PullActor = nullptr;
}

void AThrowableObject::ProjectileStop(const FHitResult& ImpactResult)
{
	if (State == EState::Launch || State == EState::Dropped)
	{
		State = EState::Idle;
	}
}

// Called every frame
//void AThrowableActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}

bool AThrowableObject::Pull(AActor* InActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Pull method called in ThrowableObject"));
	if (State != EState::Idle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pull failed: ThrowableObject not in Idle state."));
		return false;
	}

	if (SetHomingTarget(InActor))
	{
		ToggleHighlight(false);
		State = EState::Pull;
		PullActor = InActor;
		UE_LOG(LogTemp, Warning, TEXT("Pull Successful"));
		return true;
	}
	UE_LOG(LogTemp, Warning, TEXT("Pull failed: SetHomingTarget returned false."));
	return false;
}

void AThrowableObject::Launch(const FVector& InitialVelocity, AActor* Target /* = nullptr */)
{
	if (State == EState::Pull || State == EState::Attached)
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		ProjectileMovementComponent->Activate(true);
		ProjectileMovementComponent->HomingTargetComponent = nullptr;

		State = EState::Launch;

		if (Target)
		{
			if (USceneComponent* SceneComponent = Cast<USceneComponent>(Target->GetComponentByClass(USceneComponent::StaticClass())))
			{
				ProjectileMovementComponent->HomingTargetComponent = TWeakObjectPtr<USceneComponent>(SceneComponent);
				return;
			}
		}
		ProjectileMovementComponent->Velocity = InitialVelocity;
	}
}

void AThrowableObject::Drop()
{
	if (State == EState::Pull || State == EState::Attached)
	{
		if (State == EState::Attached)
		{
			DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		}
		ProjectileMovementComponent->Activate(true);
		ProjectileMovementComponent->HomingTargetComponent = nullptr;
		State = EState::Dropped;
	}
}

void AThrowableObject::ToggleHighlight(bool bIsOn)
{
	StaticMeshComponent->SetRenderCustomDepth(bIsOn);
}

bool AThrowableObject::SetHomingTarget(AActor* Target)
{
	if (Target)
	{
		if (USceneComponent* SceneComponent = Cast<USceneComponent>(Target->GetComponentByClass(USceneComponent::StaticClass())))
		{
			if (USceneComponent* ThrowableSceneComponent = Cast<USceneComponent>(GetComponentByClass(USceneComponent::StaticClass())))
			{
				ProjectileMovementComponent->SetUpdatedComponent(ThrowableSceneComponent);
				ProjectileMovementComponent->Activate(true);
				ProjectileMovementComponent->HomingTargetComponent = TWeakObjectPtr<USceneComponent>(SceneComponent);
				ProjectileMovementComponent->Velocity = FVector(0.0f, 0.0f, 1000.0f);
				return true;
			}
		}
	}
	return false;
}

