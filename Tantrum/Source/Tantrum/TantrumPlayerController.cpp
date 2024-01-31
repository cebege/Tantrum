// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumPlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TantrumCharacterBase.h"
#include "Camera/CameraComponent.h"
#include "TantrumGameModeBase.h"

static TAutoConsoleVariable<bool> CVarDisplayLaunchInputDelta(
	TEXT("Tantrum.Character.Debug.DisplayLaunchInputDelta"),
	false,
	TEXT("Display Launch Input Delta"),
	ECVF_Default);

void ATantrumPlayerController::BeginPlay()
{
	Super::BeginPlay();
	GameModeRef = Cast<ATantrumGameModeBase>(GetWorld()->GetAuthGameMode());
	if (HUDClass)
	{
		HUDWidget = CreateWidget(this, HUDClass);
		if (HUDWidget)
		{
			HUDWidget->AddToViewport();
		}
	}
}

void ATantrumPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (InputComponent)
	{
		//Bind Axis

		//Move
		InputComponent->BindAxis(TEXT("MoveForward"), this, &ATantrumPlayerController::RequestMoveForward);
		//InputComponent->BindAxis(TEXT("MoveRight"), this, &ATantrumPlayerController::RequestMoveRight);

		//Look
		InputComponent->BindAxis(TEXT("LookUp"), this, &ATantrumPlayerController::RequestLookUp);
		InputComponent->BindAxis(TEXT("LookRight"), this, &ATantrumPlayerController::RequestLookRight);

		//Turn
		InputComponent->BindAxis(TEXT("Turn"), this, &ATantrumPlayerController::RequestTurn);

		// Mouse Wheel Zoom In / Zoom Out
		InputComponent->BindAxis(TEXT("MouseWheelAxis"), this, &ATantrumPlayerController::HandleCameraZoom);

		//Bind Actions

		//Throw Object
		InputComponent->BindAction(TEXT("ThrowObject"), IE_Pressed, this, &ATantrumPlayerController::RequestThrowObject);

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

		// Pulling
		InputComponent->BindAction(TEXT("PullObject"), EInputEvent::IE_Pressed, this, &ATantrumPlayerController::RequestPullObject);
		InputComponent->BindAction(TEXT("PullObject"), EInputEvent::IE_Released, this, &ATantrumPlayerController::RequestStopPullObject);

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
	if (!GameModeRef || GameModeRef->GetCurrentGameState() != EGameState::Playing) { return; }
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
// 	if(!GameModeRef || GameModeRef->GetCurrentGameState() != EGameState::Playing) {return;}
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

void ATantrumPlayerController::RequestThrowObject()
{
	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
	{
		if (TantrumCharacterBase->CanThrowObject())
		{
			TantrumCharacterBase->RequestThrowObject();
		}
	}
}

//void ATantrumPlayerController::RequestThrowObject(float AxisValue)
//{
//	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
//	{
//		if (TantrumCharacterBase->CanThrowObject())
//		{
//			float currentDelta = AxisValue - LastAxis;
//
//			//debug
//			if (CVarDisplayLaunchInputDelta->GetBool())
//			{
//				if (fabs(currentDelta) > 0.0f)
//				{
//					UE_LOG(LogTemp, Warning, TEXT("Axis: %f LastAxis: %f currentDelta: %f"), AxisValue, LastAxis);
//				}
//			}
//			LastAxis = AxisValue;
//			const bool IsFlick = fabs(currentDelta) > FlickThreshold;
//			if (IsFlick)
//			{
//				TantrumCharacterBase->RequestThrowObject();
//			}
//		}
//		else
//		{
//			LastAxis = 0.0f;
//		}
//	}
//}

void ATantrumPlayerController::RequestJump()
{
	if (!GameModeRef || GameModeRef->GetCurrentGameState() != EGameState::Playing) { return; }
	if (GetCharacter())
	{
		GetCharacter()->Jump();

		//SoundCue Triggers
		if (JumpSound && GetCharacter()->GetCharacterMovement()->IsMovingOnGround())
		{
			FVector CharacterLocation = GetCharacter()->GetActorLocation();
			UGameplayStatics::PlaySoundAtLocation(this, JumpSound, CharacterLocation);
		}
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
	if (!GameModeRef || GameModeRef->GetCurrentGameState() != EGameState::Playing) { return; }
	if (!GetCharacter()->GetCharacterMovement()->IsMovingOnGround()) { return; }
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
	if (!GameModeRef || GameModeRef->GetCurrentGameState() != EGameState::Playing) { return; }
	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
	{
		TantrumCharacterBase->RequestSprintStart();
	}
}

void ATantrumPlayerController::RequestSprintEnd()
{
	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
	{
		TantrumCharacterBase->RequestSprintEnd();
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

void ATantrumPlayerController::RequestPullObject()
{
	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
	{
		UE_LOG(LogTemp, Warning, TEXT("RequestPullObject called"));
		TantrumCharacterBase->RequestPullObject();
	}
}

void ATantrumPlayerController::RequestStopPullObject()
{
	if (ATantrumCharacterBase* TantrumCharacterBase = Cast<ATantrumCharacterBase>(GetCharacter()))
	{
		TantrumCharacterBase->RequestStopPullObject();
	}
}