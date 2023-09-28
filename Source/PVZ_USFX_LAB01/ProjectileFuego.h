// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PVZ_USFX_LAB01Projectile.h"
#include "ProjectileFuego.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB01_API AProjectileFuego : public APVZ_USFX_LAB01Projectile
{
	GENERATED_BODY()
public:

	AProjectileFuego();
	float InitialSpeed;
	
};
