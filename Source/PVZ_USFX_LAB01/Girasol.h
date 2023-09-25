// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "Girasol.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB01_API AGirasol : public APlant
{
	GENERATED_BODY()

public:

	AGirasol();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnSoles();

	FTimerHandle Temporizador;


};
