// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STracker.generated.h"



class USHealthComponent;
class USphereComponent;
class USoundCue;
UCLASS()
class SHOOTER_API ASTracker : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASTracker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector GetNextPathPoint();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UMaterialInstanceDynamic* MatInst;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USHealthComponent* HelathComp;

	FVector NextPathPoint;

	bool bExploded;


	FTimerHandle TimeHandle_SelfDamage;

	bool bStartedSelfDestruction;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* SelfDestructSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* ExplodedSound;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float ExplosionDamage;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float ExplosionRadius;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float RequiredDistanceToTarget;

	UFUNCTION()
	void HandleTakeDamage(USHealthComponent * HealthComponent, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser);

	void DamageSelf();

	void SelfDestruct();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
