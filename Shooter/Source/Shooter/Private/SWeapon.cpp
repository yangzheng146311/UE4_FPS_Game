// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/SWeapon.h"
#include"Public/DrawDebugHelpers.h"
#include"Kismet//GameplayStatics.h"
#include"Particles/ParticleSystem.h"
#include"Particles/ParticleSystemComponent.h"
#include"Components/SkeletalMeshComponent.h"
// Sets default values
ASWeapon::ASWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MuzzleSocketName = "MuzzleSocket";
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

		FVector TracerEndPoint = EndLocation;

		FHitResult OutHit;
		

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(MyOwner);
		Params.AddIgnoredActor(this);
		Params.bTraceComplex = true;
		
		
		if (GetWorld()->LineTraceSingleByChannel(OutHit, EyeLocation, EndLocation, ECC_Visibility, Params))
		{
			TracerEndPoint = OutHit.ImpactPoint;
			//TO DO
			
			AActor *HitActor = OutHit.GetActor();
			UGameplayStatics::ApplyPointDamage(HitActor, 20.0f, ShotDirection, OutHit, MyOwner->GetInstigatorController(), this, DamageType);

			if (ImpactEffect)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, OutHit.ImpactPoint, OutHit.ImpactNormal.Rotation());
			}
		}
		
		//DrawDebugLine(GetWorld(), EyeLocation, EndLocation, FColor::White, false, 1.0, 0, 1);

		if (MuzzleEffect)
		{
			UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
		}

		if (TraceEffect)
		{
			FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
			UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TraceEffect, MuzzleLocation);

				if (TracerComp)
				{
					TracerComp->SetVectorParameter("BeamEnd", TracerEndPoint);

				}


		}
	}
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

