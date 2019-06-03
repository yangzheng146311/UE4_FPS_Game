// Fill out your copyright notice in the Description page of Project Settings.

#include "USHealthComponent.h"


// Sets default values for this component's properties
UUSHealthComponent::UUSHealthComponent()
{
	DefaultHealth = 100;
}


// Called when the game starts
void UUSHealthComponent::BeginPlay()
{
	CurrentHealth = DefaultHealth;
	Super::BeginPlay();

	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UUSHealthComponent::HandleTakeAnyDamage);



	}
	
}

void UUSHealthComponent::HandleTakeAnyDamage(AActor * DamagedActor, float Damage, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (Damage <= 0)
	{
		return;

	}



	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, DefaultHealth);
	UE_LOG(LogTemp, Warning, TEXT("Health Changed:%s"), *FString::SanitizeFloat(CurrentHealth));
}



