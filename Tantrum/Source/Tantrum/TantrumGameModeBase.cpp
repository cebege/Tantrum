// Copyright Epic Games, Inc. All Rights Reserved.


#include "TantrumGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

ATantrumGameModeBase::ATantrumGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATantrumGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	CurrentGameState = EGameState::Waiting;
	DisplayCountdown();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATantrumGameModeBase::StartGame, GameCountdownDuration, false);
	//StartGame();
}

void ATantrumGameModeBase::Tick(float DeltaTime)
{
	DetectPlayerFallingOffWorld(DeltaTime);
}

EGameState ATantrumGameModeBase::GetCurrentGameState() const
{
	return CurrentGameState;
}

void ATantrumGameModeBase::PlayerReachedEnd()
{
	CurrentGameState = EGameState::GameOver;

	GameWidget->LevelComplete();
	FInputModeUIOnly InputMode;
	PC->SetInputMode(InputMode);
	PC->SetShowMouseCursor(true);
}

void ATantrumGameModeBase::DisplayCountdown()
{
	if (!GameWidgetClass) { return; }

	PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	GameWidget = CreateWidget<UTantrumGameWidget>(PC, GameWidgetClass);
	GameWidget->AddToViewport();
	GameWidget->StartCountdown(GameCountdownDuration, this);
}

void ATantrumGameModeBase::StartGame()
{
	CurrentGameState = EGameState::Playing;
	FInputModeGameOnly InputMode;
	PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PC->SetInputMode(InputMode);
	PC->SetShowMouseCursor(false);

}

void ATantrumGameModeBase::DetectPlayerFallingOffWorld(float DeltaTime)
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn->GetMovementComponent()->IsMovingOnGround())
	{
		OnGroundLastPosition = PlayerPawn->GetActorLocation();

	}

	if (PlayerPawn->GetActorLocation().Z <= KillZ)
	{
		FallingPosition = PlayerPawn->GetActorLocation();
		RemovingInputFromPlayer(PlayerPawn);//Also removes collision
		bIsPlayerBeingRescued = true;

	}
	if (bIsPlayerBeingRescued)
	{
		MovingPlayerToGround(PlayerPawn, DeltaTime);
	}

}

void ATantrumGameModeBase::MovingPlayerToGround(APawn* Player, float DeltaTime)
{
	CurrentTime += DeltaTime;
	float Alpha = FMath::Clamp(CurrentTime / TimeToRescuePlayer, 0.0f, 1.0f);
	FVector NewPlayerLocation = FMath::Lerp(FallingPosition, OnGroundLastPosition, Alpha);
	Player->SetActorLocation(NewPlayerLocation);

	if (NewPlayerLocation.Equals(OnGroundLastPosition))
	{
		CurrentTime = 0.0f;
		RestoreInputToPlayer(Player);//Also restores collision
		bIsPlayerBeingRescued = false;
	}

}

void ATantrumGameModeBase::RemovingInputFromPlayer(APawn* Player)
{
	Player->GetMovementComponent()->Deactivate();
	Player->SetActorEnableCollision(false);
}
void ATantrumGameModeBase::RestoreInputToPlayer(APawn* Player)

{
	Player->GetMovementComponent()->Activate();
	Player->SetActorEnableCollision(true);
}