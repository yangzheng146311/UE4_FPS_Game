// Fill out your copyright notice in the Description page of Project Settings.

#include "STracker.h"
#include "Components/StaticMeshComponent.h"
#include "AI/Navigation/NavigationSystem.h"
#include "AI/Navigation/NavigationPath.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "USHealthComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "SCharacter.h"
#include "Public/TimerManager.h"
#include "Sound/SoundCue.h"
// Sets default values
ASTracker::ASTracker()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);

	RootComponent = MeshComp;

	HelathComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HelathComp->OnHealthChanged.AddDynamic(this, &ASTracker::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(200.0f);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	MovementForce = 1000;
	RequiredDistanceToTarget = 100;
	 
	bExploded = false;

	bStartedSelfDestruction = false;
	
	ExplosionRadius = 200;
	ExplosionDamage = 40;
}

// Called when the game starts or when spawned
void ASTracker::BeginPlay()
{
	Super::BeginPlay();
	
}

FVector ASTracker::GetNextPathPoint()
{
	
	
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	UNavigationPath* NavPath = UNavigationSystem::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);
	if (NavPath&&NavPath->PathPoints.Num() > 1) {
		return NavPath->PathPoints[1];
	}
	return GetActorLocation();
}

void ASTracker::HandleTakeDamage(USHealthComponent * HealthComponent, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{

	if (MatInst == nullptr)
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));

	if (MatInst) {
		MatInst->SetScalarParameterValue("LastTimeTakeDamage", GetWorld()->TimeSeconds);
	}

	 
	if (Health <= 0) {
		SelfDestruct();
	}

	UE_LOG(LogTemp, Log, TEXT("Health is %s of %s"), *FString::SanitizeFloat(Health), *GetName());
	
	
}

void ASTracker::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20.0f, GetInstigatorController(), this, nullptr);

}

void ASTracker::SelfDestruct()
{
	if (bExploded) {
		return;
	}

	bExploded = true;
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(this, ExplodedSound, GetActorLocation());


	MeshComp->SetVisibility(false, true);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (Role == ROLE_Authority)
	{
		TArray<AActor*> IgnoreActors;
		IgnoreActors.Add(this);
		UGameplayStatics::ApplyRadialDamage(this, ExplosionDamage, GetActorLocation(), ExplosionRadius, nullptr, IgnoreActors, this, GetInstigatorController(), true);
		DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Red, false, 2.0f, 0, 1.0f);
		SetLifeSpan(2.0f);
	}
}

// Called every frame
void ASTracker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Role == ROLE_Authority && !bExploded) {
		float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarget <= RequiredDistanceToTarget) {
			NextPathPoint = GetNextPathPoint();
		}
		else {
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();
			ForceDirection *= MovementForce;
			MeshComp->AddForce(ForceDirection, NAME_None, true);
		}
	}
}

// Called to bind functionality to input
void ASTracker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASTracker::NotifyActorBeginOverlap(AActor* OtherActor) {

	Super::NotifyActorBeginOverlap(OtherActor);

	if (!bStartedSelfDestruction&&!bExploded) {
		bStartedSelfDestruction = true;
		ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);

		if (PlayerPawn) {
			if (Role == ROLE_Authority)
			GetWorldTimerManager().SetTimer(TimeHandle_SelfDamage, this, &ASTracker::DamageSelf, 0.5f, true, 0.0f);
			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);
		}
	}
}

