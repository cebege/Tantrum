// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TantrumPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANTRUM_API ATantrumPlayerController : public APlayerController
{
	GENERATED_BODY()

private:

	bool bIsAligningCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float MaxWalkSpeed = 400.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float SprintSpeed = 1000.0f;

	//UPROPERTY(EditAnywhere, Category = "Movement")
	//	float TurnSpeed = 450.0f;

	UPROPERTY(EditAnywhere, Category = "Look")
		float BaseLookUpRate = 50.f;

	UPROPERTY(EditAnywhere, Category = "Look")
		float BaseLookRightRate = 50.f;

public:

	virtual void Tick(float DeltaTime) override;

protected:

	//Bind Axis

	//Move
	void RequestMoveForward(float AxisValue);
	void RequestMoveRight(float AxisValue);

	//Look
	void RequestLookUp(float AxisValue);
	void RequestLookRight(float AxisValue);


	//Bind Actions

	//Jump
	void RequestJump();
	void RequestStopJump();

	//Sprint
	void RequestSprintStart();
	void RequestSprintEnd();

	//Crouch
	void RequestCrouchStart();
	void RequestCrouchEnd();
	void ToggleCrouch();

	// Bind Right Mouse Button
	//void AlignCharacterToController();
	//void RequestAlignCharacterToController();
	//void RequestStopAligningCharacterToController();


	
};
