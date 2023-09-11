// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB01GameMode.generated.h"


class AZombie;
class APlant;

UCLASS(MinimalAPI)
class APVZ_USFX_LAB01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB01GameMode();

	//Declarar un vector de objetos
	TArray<class AZombie*> vectorZombies;
	//TArray<class APlant*> vectorPlants;
	
	//Declarar un mapa de objetos
	TMap<FString, APlant*> mapPlants;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:

	//Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Temporizador;

	float TiempoTranscurrido;

	void aumentarVelocidad();
};



