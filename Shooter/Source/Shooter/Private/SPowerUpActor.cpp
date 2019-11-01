// Fill out your copyright notice in the Description page of Project Settings.

#include "SPowerUpActor.h"
#include "Public/TimerManager.h"

// Sets default values
ASPowerUpActor::ASPowerUpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASPowerUpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPowerUpActor::OnTickPowerup()
{
	
	OnPowerupTicked();

	if (TicksProcessed >= TotalNrOfTicks) {
		OnExpired();
		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}

	TicksProcessed++;

}

// Called every frame
void ASPowerUpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASPowerUpActor::ActivePowerup()
{
	OnActived();
	
	if (PowerupInterval > 0.0f) {
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerUpActor::OnTickPowerup, PowerupInterval, true);
	}
	else {
		OnTickPowerup();
	}

}

