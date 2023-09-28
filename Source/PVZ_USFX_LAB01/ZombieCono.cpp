// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCono.h"
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



AZombieCono::AZombieCono()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);

	ZombieMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));


	bCanFire = true;
	GunOffset = FVector(40.f, 40.f, 40.f);
	FireRate = 0.5f;

	//energia = 200;
	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;

	//CantidadDisparos = 1;
	//contador = 1;

}
void AZombieCono::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();
	GetWorldTimerManager().SetTimer(ManejoTiempo, this, &AZombieCono::ataquesZombie, FireRate, true, 0.1f);



}

void AZombieCono::Tick(float DeltaTime)
{

	if (Health <= 0)
	{
		Destroy();
	}

	// Disparar continuamente hacia la izquierda
	FireShot(FVector(0.0f, -1.0f, 0.0f));/*
	if (Health <= 0)
	{
		Destroy();
	}
	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos) {

		FireShot(FVector(0.0f, -1.0f, 0.0f));
		TiempoTranscurrido = 0.0f;
	}*/
	FVector LocalizacionObjetivo = FVector(-800.0f, -600.0f, 160.0f); // Cambia la ubicación objetivo según tus necesidades
	// Calcula la dirección y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	// Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());




	// Calcula el desplazamiento en este frame
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaAlObjetivo)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
		//this->SetActorRotation(NewRotation);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);

	}

}
void AZombieCono::FireShot(FVector FireDirection)
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
				World->SpawnActor<AProjectileFuego>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AZombieCono::ShotTimerExpired, FireRate);

			//// try and play the sound if specified
			//if (FireSound != nullptr)
			//{
			//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			//}

			//bCanFire = false;
		}
	}



}

void AZombieCono::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
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

void AZombieCono::ShotTimerExpired()
{
	bCanFire = true;



}

void AZombieCono::ataquesZombie()
{
	FireShot(FVector(0.0f, 1.0f, 0.0f));
}
