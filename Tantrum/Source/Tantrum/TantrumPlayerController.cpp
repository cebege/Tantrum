// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

void ATantrumPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (InputComponent)
	{
		//Bind Axis
		InputComponent->BindAxis(TEXT("MoveForward"), this, &ATantrumPlayerController::RequestMoveForward);
		InputComponent->BindAxis(TEXT("Turn"), this, &ATantrumPlayerController::RequestTurn);
		InputComponent->BindAxis(TEXT("LookUp"), this, &ATantrumPlayerController::RequestLookUp);
		InputComponent->BindAxis(TEXT("LookRight"), this, &ATantrumPlayerController::RequestLookRight);

		//Bind Actions
		InputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ATantrumPlayerController::JumpAction);
		InputComponent->BindAction(TEXT("Sprint"), IE_Pressed, this, &ATantrumPlayerController::SprintAction);
		InputComponent->BindAction(TEXT("Crouch"), IE_Pressed, this, &ATantrumPlayerController::CrouchAction);

		//Bind Right Mouse Button
		InputComponent->BindAction(TEXT("AlignToController"), IE_Pressed, this, &ATantrumPlayerController::RequestAlignCharacterToController);
		InputComponent->BindAction(TEXT("AlignToController"), IE_Released, this, &ATantrumPlayerController::RequestStopAligningCharacterToController);
	}
}

void ATantrumPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsAligningCharacter)
	{
		AlignCharacterToController();
	}
}


void ATantrumPlayerController::RequestMoveForward(float AxisValue)
{
	//Input Option 1:
	if (AxisValue != 0.0f)
	{
		FRotator const ControlSpaceRot = GetControlRotation();
		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X), AxisValue);
	}

	//Input Option 2 (along a straight line):
	//FVector DeltaLocation = FVector::ZeroVector;
	//DeltaLocation.X = AxisValue * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);
	//GetCharacter()->AddActorLocalOffset(DeltaLocation, true);



}

void ATantrumPlayerController::RequestTurn(float AxisValue)
{
	if (AxisValue != 0.0f)
	{
		FRotator const ControlSpaceRot = GetControlRotation();
		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y), AxisValue);
	}

	//Input Option 2:
	//FRotator DeltaRotation = FRotator::ZeroRotator;
	//DeltaRotation.Yaw = AxisValue * TurnSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);
	//GetCharacter()->AddActorLocalRotation(DeltaRotation, true);
}

void ATantrumPlayerController::RequestLookUp(float AxisValue)
{
	AddPitchInput(AxisValue * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATantrumPlayerController::RequestLookRight(float AxisValue)
{
	AddYawInput(AxisValue * BaseLookRightRate * GetWorld()->GetDeltaSeconds());
}

void ATantrumPlayerController::JumpAction()
{
	if (GetCharacter())
	{
		GetCharacter()->Jump();
	}
}

void ATantrumPlayerController::SprintAction()
{
	// tbc
}

void ATantrumPlayerController::CrouchAction()
{
	// tbc
}

void ATantrumPlayerController::AlignCharacterToController()
{
	if (GetCharacter())
	{
		FRotator ControllerRot = GetControlRotation();
		ControllerRot.Pitch = 0;
		GetCharacter()->SetActorRotation(ControllerRot);
	}

}

void ATantrumPlayerController::RequestAlignCharacterToController()
{
	bIsAligningCharacter = true;
}

void ATantrumPlayerController::RequestStopAligningCharacterToController()
{
	bIsAligningCharacter = false;
}

