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
		float Speed = 1000.0f;

	//UPROPERTY(EditAnywhere, Category = "Movement")
	//	float TurnSpeed = 450.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float BaseLookUpRate = 50.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float BaseLookRightRate = 50.f;

public:

	virtual void Tick(float DeltaTime) override;

	//Bind Axis
	void RequestMoveForward(float AxisValue);
	void RequestTurn(float AxisValue);
	void RequestLookUp(float AxisValue);
	void RequestLookRight(float AxisValue);


	//Bind Actions
	void JumpAction();
	void SprintAction();
	void CrouchAction();

	// Bind Right Mouse Button
	void AlignCharacterToController();
	void RequestAlignCharacterToController();
	void RequestStopAligningCharacterToController();


	
};
