// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumCharacterBase.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TantrumPlayerController.h"
//#include "Kismet/GameplayStatics.h"

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
		GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	}
	
}

// Called every frame
void ATantrumCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATantrumCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

void ATantrumCharacterBase::Landed(const FHitResult& Hit)
{
	ATantrumPlayerController* TPlayerController = GetController<ATantrumPlayerController>();

	if (TPlayerController)
	{
		const float FallImpactSpeed = FMath::Abs(GetVelocity().Z);
		if (FallImpactSpeed < MinImpactSpeed)
		{
			return;
		}
		const float DeltaImpact = MaxImpactSpeed - MinImpactSpeed;
		const float FallRatio = FMath::Clamp((FallImpactSpeed - MinImpactSpeed) / DeltaImpact, 0.0f, 1.0f); // avoid ratio being greater than 1.
		const bool bAffectSmall = FallRatio <= 0.5;
		const bool bAffectLarge = FallRatio > 0.5;
		TPlayerController->PlayDynamicForceFeedback(FallRatio, 0.5f, bAffectLarge, bAffectSmall, bAffectLarge, bAffectSmall);
	}
}
