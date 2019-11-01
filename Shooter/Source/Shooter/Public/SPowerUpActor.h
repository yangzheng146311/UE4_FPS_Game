// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerUpActor.generated.h"

UCLASS()
class SHOOTER_API ASPowerUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerUpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnTickPowerup();

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNrOfTicks;

	int32 TicksProcessed;

	FTimerHandle TimerHandle_PowerupTick;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ActivePowerup();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActived();


	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired();

	
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked();

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;
	
};
