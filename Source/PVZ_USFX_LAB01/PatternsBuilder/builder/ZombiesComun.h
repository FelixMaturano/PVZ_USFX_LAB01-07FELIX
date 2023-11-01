// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FZombies.h"
#include "ZombiesComun.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API AZombiesComun : public AActor, public IFZombies
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombiesComun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	////Define el nombre de los zombies
	//void DefinirSalud(FString myZombies);
	////Define el nombre de los obstaculos
	//void DefinirVelocidad(FString myObstaculos);
	////Define las vidas del nivel
	//void DefinirVidas(int myVidas);
	//float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	//void MoveToTarget(FVector TargetLocation);

	//void morir();
};
