// Fill out your copyright notice in the Description page of Project Settings.

#include "SPickUpActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "SPowerUpActor.h"
#include "SCharacter.h"
#include "TimerManager.h"

// Sets default values
ASPickUpActor::ASPickUpActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("ShpereComp"));
	SphereComp->SetSphereRadius(75.0f);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeRotation(FRotator(90, 0.0f, 0.0f));
	DecalComp->DecalSize = FVector(64, 75, 75);

	DecalComp->SetupAttachment(RootComponent);

	CooldownTime = 5.0f;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASPickUpActor::BeginPlay()
{
	Super::BeginPlay();

	if(Role==ROLE_Authority)
	Respawn();
}

// Called every frame
void ASPickUpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASPickUpActor::Respawn()
{
	if (PowerUpClass == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("PowerUpClass is nullptr in %s"), *GetName());
		return;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	PowerupInstance = GetWorld()->SpawnActor<ASPowerUpActor>(PowerUpClass, GetTransform(), SpawnParams);


}

void ASPickUpActor::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);


	if (PlayerPawn) {
		if (PowerupInstance&&Role == ROLE_Authority)
		{


			if (PowerupInstance->GetFName().ToString().Contains("Speed")) {
				PlayerPawn->bGetEnergy = true;
				PlayerPawn->PowerupInterval = PowerupInstance->PowerupInterval;
				PlayerPawn->TempEnergy = PowerupInstance->PowerupInterval;
			}

			PowerupInstance->ActivePowerup( OtherActor);
			PowerupInstance = nullptr;

			GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &ASPickUpActor::Respawn, CooldownTime);
		}
	}
}
