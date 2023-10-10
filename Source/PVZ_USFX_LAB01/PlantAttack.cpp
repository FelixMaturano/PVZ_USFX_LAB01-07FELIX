// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantAttack.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

#include "PVZ_USFX_LAB01Projectile.h"
#include "ProjectileFuego.h"

#include "TimerManager.h"
#include "Zombie.h"
#include "Lanzaguisantes.h"
#include "Lanzaboomerang.h"
#include <cmath>
APlantAttack::APlantAttack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantAtaqueMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPlanta->SetStaticMesh(PlantAtaqueMesh.Object);
	MeshPlanta->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));



	bCanFire = true;
	GunOffset = FVector(40.f, 40.f, 40.f);
	FireRate = 0.5f;

	//energia = 200;
	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;

	CantidadDisparos = 1;
	contador = 1;
}
void APlantAttack::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	// Verifica si el otro actor es un zombie
	AZombie* ActualZombie = Cast<AZombie>(OtherActor);

	if (ActualZombie)
	{
		TakeDamage(ActualZombie->DamageGenerates, FDamageEvent(), nullptr, this);

		// Reduce la energía de la planta cuando un zombie está cerca
		// Puedes implementar tu propia lógica para reducir la energía aquí
		// Por ejemplo, disminuir una variable que represente la energía de la planta
		// También puedes programar el tiempo entre las reducciones de energía
	}
}


void APlantAttack::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();
	GetWorldTimerManager().SetTimer(ManejoTiempo, this, &APlantAttack::AtaquePlanta, FireRate, true, 0.1f);

}

void APlantAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Health <= 0)
	{
		Destroy();
	}
	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos) {

		FireShot(FVector(0.0f, 1.0f, 0.0f));
		TiempoTranscurrido = 0.0f;
	}
}

void APlantAttack::AtaquePlanta()
{
	FireShot(FVector(0.0f, 1.0f, 0.0f));
}


void APlantAttack::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ALanzaboomerang::ShotTimerExpired, FireRate);

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

float APlantAttack::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aquí puedes manejar el daño como desees, por ejemplo, actualizando la salud del actor.
	Health -= DamageAmount;

	// Devuelve la cantidad de daño que se aplicó realmente.
	return DamageAmount;
}

