// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoratorPlantas.h"
#include "EnemigoADistacia.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB01_API AEnemigoADistacia : public ADecoratorPlantas
{
	GENERATED_BODY()

public:
	//Start Fighting
	virtual void Pelear() override;
	//Returns how much damage this enemy has taken
	virtual int GetDano() override;
	//Kill this enemy
	virtual void Morir() override;
	
};
