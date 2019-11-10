// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ASWeapon;
class USHealthComponent;
UCLASS()
class SHOOTER_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void MoveForward(float value);
	void MoveRight(float value);
	void StartCrouch();
	void EndCrouch();
	void StartZoom();
	void EndZoom();



	
	UPROPERTY(VisibleAnyWhere,BlueprintReadOnly,Category="Components")
	UCameraComponent *CameraComp;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent *SpringArmComp;

	bool bWantsToZoom;

	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ZoomedFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player",meta=(ClampMin=0.1,ClampMax=100))
	float ZoomInterpSpeed;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Health")
	bool bDied;

	

	UPROPERTY(Replicated)
	ASWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	USHealthComponent* HealthComp;

	UFUNCTION()
	void OnHealthChanged(USHealthComponent* HealthComponent, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ASWeapon> StarterWeaponClass;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Energy")
	float EnergyPercent;


	void CacaulateEnergyPercent(float DeltaTime);
public:	


	UPROPERTY(Replicated)
	bool bGetEnergy;
	
	UPROPERTY(Replicated, EditDefaultsOnly, Category = Energy)
	float PowerupInterval;
	
	UPROPERTY(Replicated)
	float TempEnergy;


	



	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void EndFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	ASWeapon* GetWeapon();
};
