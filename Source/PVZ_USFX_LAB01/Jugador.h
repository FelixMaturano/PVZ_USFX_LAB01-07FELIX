// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Jugador.generated.h"

class APVZ_USFX_LAB01Pawn;

UCLASS(config = Game)
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

	static const FName Spawns;
	void SpawnZombie();

	int contador;

	FVector Localizacion;
	

	FVector WorldLocation, WorldDirection;

	APlayerController* PlayerController;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class AGrilla* GrillaActual;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ASol* SolActual;



	void TriggerClick();

	void SeguimientoGrilla(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

	void SeguimientoSol(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

};
