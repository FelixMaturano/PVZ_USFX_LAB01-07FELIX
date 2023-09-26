// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUDPlantas.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB01_API AHUDPlantas : public AHUD
{
	GENERATED_BODY()

public:
	TSharedPtr<class SSeleccionPlantas> WidgetSeleccion;
	TSharedPtr<class SWidget> WidgetActivo;

	virtual void BeginPlay() override;

	void QuitarHud();

	void SpawnPlant(); 
	
};
