// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"

void ATantrumPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (InputComponent)
	{
		//Bind Axis

		//Move
		InputComponent->BindAxis(TEXT("MoveForward"), this, &ATantrumPlayerController::RequestMoveForward);
		/*InputComponent->BindAxis(TEXT("MoveRight"), this, &ATantrumPlayerController::RequestMoveRight);*/
		
		//Look
		InputComponent->BindAxis(TEXT("LookUp"), this, &ATantrumPlayerController::RequestLookUp);
		InputComponent->BindAxis(TEXT("LookRight"), this, &ATantrumPlayerController::RequestLookRight);

		//Turn
		InputComponent->BindAxis(TEXT("Turn"), this, &ATantrumPlayerController::RequestTurn);

		// Mouse Wheel Zoom In / Zoom Out
		InputComponent->BindAxis(TEXT("MouseWheelAxis"), this, &ATantrumPlayerController::HandleCameraZoom);

		//Bind Actions

		// Jump
		InputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ATantrumPlayerController::RequestJump);
		InputComponent->BindAction(TEXT("Jump"), IE_Released, this, &ATantrumPlayerController::RequestStopJump);

		//Sprint
		InputComponent->BindAction(TEXT("Sprint"), IE_Pressed, this, &ATantrumPlayerController::RequestSprintStart);
		InputComponent->BindAction(TEXT("Sprint"), IE_Released, this, &ATantrumPlayerController::RequestSprintEnd);
		
		//Crouch
		InputComponent->BindAction(TEXT("Crouch"), IE_Pressed, this, &ATantrumPlayerController::RequestCrouchStart);
		InputComponent->BindAction(TEXT("Crouch"), IE_Released, this, &ATantrumPlayerController::RequestCrouchEnd);
		InputComponent->BindAction(TEXT("ToggleCrouch"), IE_Pressed, this, &ATantrumPlayerController::ToggleCrouch);

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
	if (AxisValue != 0.0f)
	{
		FRotator const ControlSpaceRot = GetControlRotation();
		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X), AxisValue);
	}
}

void ATantrumPlayerController::HandleCameraZoom(float AxisValue)
{
	if (AxisValue != 0.0f)
	{
		if (GetCharacter())
		{
			UCameraComponent* Camera = GetCharacter()->FindComponentByClass<UCameraComponent>();
			if (Camera)
			{
				float NewFOV = FMath::Clamp(Camera->FieldOfView + AxisValue * ZoomRate, MinZoomFOV, MaxZoomFOV);
				Camera->SetFieldOfView(NewFOV);
			}
		}
	}
}

//void ATantrumPlayerController::RequestMoveRight(float AxisValue)
//{
//	if (AxisValue != 0.0f)
//	{
//		FRotator const ControlSpaceRot = GetControlRotation();
//		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y), AxisValue);
//	}
//}

void ATantrumPlayerController::RequestTurn(float AxisValue)
{
	if (AxisValue != 0.0f)
	{
		AddYawInput(AxisValue * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	}
}

void ATantrumPlayerController::RequestLookUp(float AxisValue)
{
	if (bIsAligningCharacter && AxisValue != 0.0f)
	{
		AddPitchInput(AxisValue * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
	}
}

void ATantrumPlayerController::RequestLookRight(float AxisValue)
{
	if (bIsAligningCharacter && AxisValue != 0.0f)
	{
		AddYawInput(AxisValue * BaseLookRightRate * GetWorld()->GetDeltaSeconds());
	}
}

void ATantrumPlayerController::RequestJump()
{
	if (GetCharacter())
	{
		GetCharacter()->Jump();
	}
}

void ATantrumPlayerController::RequestStopJump()
{
	if (GetCharacter()) // allows a jump hold propoerty in editor
	{
		GetCharacter()->StopJumping();
	}
}

// Toggle Crouch and Uncrouch

void ATantrumPlayerController::ToggleCrouch()
{
	if (GetCharacter())
	{
		if (!GetCharacter()->GetCharacterMovement()->IsMovingOnGround())
		{
			return; // avoid clashes with jump function.
		}

		if (GetCharacter()->bIsCrouched)
		{
			GetCharacter()->UnCrouch();
		}
		else
		{
			GetCharacter()->Crouch();
		}
	}
}

void ATantrumPlayerController::RequestCrouchStart()
{
	if (!GetCharacter()->GetCharacterMovement()->IsMovingOnGround()) { return; } // avoid clashes with jump function.
	
	if (GetCharacter())
	{
		GetCharacter()->Crouch();
	}
}

void ATantrumPlayerController::RequestCrouchEnd()
{
	if (GetCharacter())
	{
		GetCharacter()->UnCrouch();
	}
}

void ATantrumPlayerController::RequestSprintStart()
{
	if (GetCharacter())
	{
		GetCharacter()->GetCharacterMovement()->MaxWalkSpeed += SprintSpeed;
	}
}

void ATantrumPlayerController::RequestSprintEnd()
{
	if (GetCharacter())
	{
		GetCharacter()->GetCharacterMovement()->MaxWalkSpeed -= SprintSpeed;
	}
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
