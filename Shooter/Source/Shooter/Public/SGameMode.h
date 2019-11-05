// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"


enum class EWaveState :uint8;

/**
 *
 */
UCLASS()
class SHOOTER_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	ASGameMode();

	int32 NrOfBotsToSpawn;
	int32 WaveCount;
	float TimeBetweenWaves;

	FTimerHandle TimerHandle_SpawnInterval;
	FTimerHandle TimerHandle_NextWaveStart;

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();
	
	void StartWave();
	
	void EndWave();

	void PrepareForNextWave();

	void SpawnBotTimerElapsed();

	void CheckWaveState();

	void CheckAnyPlayerAlive();

	void GameOver();

	void SetWaveState(EWaveState NewState);

	void RestartDeadPlayers();

public:
	virtual void StartPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
};
