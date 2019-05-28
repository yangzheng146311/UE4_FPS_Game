// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/SWeapon.h"
#include"Public/DrawDebugHelpers.h"
#include"Kismet//GameplayStatics.h"
// Sets default values
ASWeapon::ASWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

}

// Called when the game starts or when spawned
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();

}

void ASWeapon::Fire()
{
	AActor *MyOwner = GetOwner();

	if (MyOwner)
	{

		FVector EyeLocation;
		FRotator EyeRotation;

		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector ShotDirection = EyeRotation.Vector();

		FVector EndLocation = EyeLocation + ShotDirection * 10000;

		FHitResult OutHit;
		

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(MyOwner);
		Params.AddIgnoredActor(this);
		Params.bTraceComplex = true;
		
		
		if (GetWorld()->LineTraceSingleByChannel(OutHit, EyeLocation, EndLocation, ECC_Visibility, Params))
		{

			//TO DO
			
			AActor *HitActor = OutHit.GetActor();
			UGameplayStatics::ApplyPointDamage(HitActor, 20.0f, ShotDirection, OutHit, MyOwner->GetInstigatorController(), this, DamageType);
		}
		
		DrawDebugLine(GetWorld(), EyeLocation, EndLocation, FColor::White, false, 1.0, 0, 1);
	}
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

