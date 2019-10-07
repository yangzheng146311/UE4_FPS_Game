// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/SWeapon.h"
#include"Public/DrawDebugHelpers.h"
#include"Kismet//GameplayStatics.h"
#include"Particles/ParticleSystem.h"
#include"Particles/ParticleSystemComponent.h"
#include"Components/SkeletalMeshComponent.h"
#include"PhysicalMaterials//PhysicalMaterial.h"
#include"Shooter.h"
#include"UObject//ConstructorHelpers.h"
#include"Public/TimerManager.h"
#include "Net/UnrealNetwork.h"
static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef  CVARDebugWeaponDrawing(
	TEXT("Shoot.DebugWeapons"),
	DebugWeaponDrawing,
	TEXT("Draw Debug Line for Weapon"),
	ECVF_Cheat
);

// Sets default values
ASWeapon::ASWeapon()
{

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MuzzleSocketName = "MuzzleSocket";
	BaseDamage = 20.0f;
	TimeBetweenShots = 0.1f;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ME(TEXT("'/Game/WeaponEffects/Muzzle/P_Muzzle_Large'"));
	MuzzleEffect = ME.Object;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> FIE(TEXT("'/Game/WeaponEffects/BloodImpact/P_blood_splash_02'"));
	FleshImpactEffect = FIE.Object;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> DIE(TEXT("'/Game/WeaponEffects/GenericImpact/P_RifleImpact'"));
	DefaultImpactEffect= DIE.Object;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> TE(TEXT("'/Game/WeaponEffects/BasicTracer/P_SmokeTrail'"));
	TraceEffect = TE.Object;

	SetReplicates(true);
}


void ASWeapon::Fire()
{
	if (Role < ROLE_Authority) {
		ServerFire();
	}
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
		Params.bReturnPhysicalMaterial = true;


		if (GetWorld()->LineTraceSingleByChannel(OutHit, EyeLocation, EndLocation, COLLISION_WEAPON, Params))
		{
			TracerEndPoint = OutHit.ImpactPoint;
			//TO DO

			AActor *HitActor = OutHit.GetActor();
			
			EPhysicalSurface SurfaceType=UPhysicalMaterial::DetermineSurfaceType(OutHit.PhysMaterial.Get());

			UParticleSystem* SelectedEffect = nullptr;
			switch (SurfaceType)
			{
			case SURFACETYPE_FleshDefault:

				UGameplayStatics::ApplyPointDamage(HitActor, BaseDamage, ShotDirection, OutHit, MyOwner->GetInstigatorController(), this, DamageType);
				SelectedEffect = FleshImpactEffect;
				break;
			case SURFACETYPE_FleshVulnerable:
				UGameplayStatics::ApplyPointDamage(HitActor, BaseDamage*4, ShotDirection, OutHit, MyOwner->GetInstigatorController(), this, DamageType);
				SelectedEffect = FleshImpactEffect;
				break;
			default:
				UGameplayStatics::ApplyPointDamage(HitActor, BaseDamage, ShotDirection, OutHit, MyOwner->GetInstigatorController(), this, DamageType);
				SelectedEffect = DefaultImpactEffect;
				break;
			}

			if (SelectedEffect)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, OutHit.ImpactPoint, OutHit.ImpactNormal.Rotation());
			}
		}
		if (DebugWeaponDrawing > 0)
		{
			DrawDebugLine(GetWorld(), EyeLocation, EndLocation, FColor::White, false, 1.0, 0, 1);
		}

		PlayFireEffect(TracerEndPoint);


		if (Role == ROLE_Authority) {
			HitScanTrace.TraceTo = TracerEndPoint;
		
		}


		LastFireTime = GetWorld()->TimeSeconds;
	}
}
void ASWeapon::ServerFire_Implementation()
{
	Fire();
}

bool ASWeapon::ServerFire_Validate()
{
	return true;
}


void ASWeapon::OnRep_HitScanTrace()
{
	PlayFireEffect(HitScanTrace.TraceTo);
	
}


void ASWeapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds,0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShot, this, &ASWeapon::Fire, TimeBetweenShots, true, FirstDelay);
}

void ASWeapon::EndFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShot);
}

void ASWeapon::PlayFireEffect(FVector TracerEndPoint)
{
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


	APawn* MyOwner = Cast<APawn>(GetOwner());

	if (MyOwner)
	{

		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{

			PC->ClientPlayCameraShake(FireCamShake);

		}

	}



}


void ASWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ASWeapon, HitScanTrace, COND_SkipOwner);
}
