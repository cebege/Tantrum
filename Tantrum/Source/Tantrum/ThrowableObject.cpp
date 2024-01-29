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
	if (State == EState::Idle || State == EState::Attached || State == EState::Dropped)
	{
		return;
	}

	//three options when hit
	//if in attached ignore

	//if not we actor was being pulled or launched
	//pulled we want to check that the hit is of the actor pulling
	//in which case it's a successful attach

	//if launched and hit a character that is not the launcher
	//do damage or whatever it is we want

	//ignore all other hits

	//this will wait until the projectile comes to a natural stop before returning it to idle


	if (PullActor && State == EState::Pull)
	{
		if (ATantrumCharacterBase* TantrumCharacter = Cast<ATantrumCharacterBase>(PullActor))
		{
			if (Other == PullActor)
			{
				AttachToComponent(TantrumCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("ObjectAttach"));
				SetOwner(TantrumCharacter);
				ProjectileMovementComponent->Deactivate();
				State = EState::Attached;
				//set character state to attached
				TantrumCharacter->OnThrowableAttached(this);
			}
			else
			{
				TantrumCharacter->ResetThrowableObject();
				State = EState::Dropped;
			}
		}
	}

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
	if (State != EState::Idle)
	{
		return false;
	}

	if (SetHomingTarget(InActor))
	{
		ToggleHighlight(false);
		State = EState::Pull;
		PullActor = InActor;
		return true;
	}

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

