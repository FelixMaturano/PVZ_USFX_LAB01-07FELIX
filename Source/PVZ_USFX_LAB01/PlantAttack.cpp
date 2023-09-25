// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantAttack.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PVZ_USFX_LAB01Projectile.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

APlantAttack::APlantAttack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantAtaqueMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	//MeshPlanta->SetStaticMesh(PlantAtaqueMesh.Object);
	PlantMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 1.5f));



	bCanFire = true;
	GunOffset = FVector(40.f, 40.f, 40.f);
	FireRate = 0.2f;

	energia = 150;
}


void APlantAttack::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();
	GetWorldTimerManager().SetTimer(ManejoTiempo, this, &APlantAttack::AtaquePlanta, 01.0f, true, 0.0f);

}

void APlantAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlantAttack::AtaquePlanta()
{
	FireShot(FVector(0.0f, 1.0f, 0.0f));
}


void APlantAttack::FireShot(FVector FireDirection)
{
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<APVZ_USFX_LAB01Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlantAttack::ShotTimerExpired, FireRate);

			//// try and play the sound if specified
			//if (FireSound != nullptr)
			//{
			//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			//}

			//bCanFire = false;
		}
	}
}

void APlantAttack::ShotTimerExpired()
{
	bCanFire = true;
}
