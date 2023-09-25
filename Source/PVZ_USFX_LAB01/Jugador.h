// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Jugador.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API AJugador : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	static const FName Spawn;
	void SpawnZombie();

	int contador;

	FVector Localizacion;



};
