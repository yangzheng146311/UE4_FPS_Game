// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPickUpActor.generated.h"

class USphereComponent;
class ASPowerUpActor;
UCLASS()
class SHOOTER_API ASPickUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickUpActor();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
    void Respawn();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	

    UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComp;

	UPROPERTY(EditInstanceOnly, Category = "Pickups")
	TSubclassOf<ASPowerUpActor> PowerUpClass;

    UPROPERTY(EditDefaultsOnly,Category="Pickups")
	float CooldownTime;


	ASPowerUpActor* PowerupInstance;

    FTimerHandle TimerHandle_RespawnTimer;
};
