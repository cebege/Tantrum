// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TantrumGameWidget.h"
#include "TantrumGameModeBase.generated.h"

// Enum to track the current state of the game 
UENUM(BlueprintType)
enum class EGameState : uint8
{
	None		UMETA(DisplayName = "None"),
	Waiting		UMETA(DisplayName = "Waiting"),
	Playing		UMETA(DisplayName = "Playing"),
	Paused		UMETA(DisplayName = "Paused"),
	GameOver	UMETA(DisplayName = "GameOver"),
};

UCLASS()
class TANTRUM_API ATantrumGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	// --- FUNCTIONS --- //
	ATantrumGameModeBase();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		EGameState GetCurrentGameState() const;

	void PlayerReachedEnd();

	virtual void Tick(float DeltaTime) override;

private:

	// --- VARS --- //

	// Create and set CurrentGameState to NONE. This will be tracked in the code file. 
	UPROPERTY(VisibleAnywhere, Category = "States")
		EGameState CurrentGameState = EGameState::None;

	// Countdown before gameplay state begins. Exposed so we can easily change this in BP editor. 
	UPROPERTY(EditAnywhere, Category = "Game Details")
		float GameCountdownDuration = 4.0f;

	FTimerHandle TimerHandle;

	UPROPERTY()
		UTantrumGameWidget* GameWidget; // Object we'll be creating and adding to the Viewport

	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UTantrumGameWidget> GameWidgetClass; // Exposed class to check the type of widget to display

	APlayerController* PC = nullptr;

	FVector OnGroundLastPosition = FVector::ZeroVector; //Last Position on World when OnGround

	FVector FallingPosition = FVector::ZeroVector; //Position From Player when it Hits KillZ

	float CurrentTime = 0.0f; // Used to set a timer from Moving Player back to Ground

	bool bIsPlayerBeingRescued = false;//Set to true when he hits KillZ

	UPROPERTY(EditAnywhere, Category = "KillZ")
		float TimeToRescuePlayer = 3.f;//Set time that takes to put Player back in Ground

	UPROPERTY(EditAnywhere, Category = "KillZ")
		float KillZ = -500.f;//Location at which World won't allow Player to keep falling

		// --- FUNCTIONS --- //

	void DisplayCountdown();
	void StartGame();

	void DetectPlayerFallingOffWorld(float DeltaTime);
	void MovingPlayerToGround(APawn* Player, float DeltaTime);
	void RemovingInputFromPlayer(APawn* Player);
	void RestoreInputToPlayer(APawn* Player);
};
