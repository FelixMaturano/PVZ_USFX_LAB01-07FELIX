// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDPlantas.h"
#include "SSeleccionPlantas.h"
#include "Widgets/SWeakWidget.h"
#include "GameFramework/PlayerController.h"
#include "Engine.h"
#include "Girasol.h"
void AHUDPlantas::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{

		WidgetSeleccion = SNew(SSeleccionPlantas).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(WidgetActivo, SWeakWidget).PossiblyNullContent(WidgetSeleccion.ToSharedRef()));

	}
}

void AHUDPlantas::QuitarHud()
{
	if (GEngine && GEngine->GameViewport && WidgetActivo.IsValid())
	{
		GEngine->GameViewport->RemoveViewportWidgetContent(WidgetActivo.ToSharedRef());

		if (PlayerOwner) {
			//PlayerOwner->bShowMouseCursor = false;
			PlayerOwner->SetInputMode(FInputModeGameOnly());
		}
	}
}

void AHUDPlantas::SpawnPlant()
{
	float locationX = FMath::RandRange(-820,0);
	float locationY = FMath::RandRange(-820, 180);
	
	AGirasol* Girasol = GetWorld()->SpawnActor<AGirasol>(AGirasol::StaticClass(), FVector(locationX,locationY,160), FRotator::ZeroRotator);

	//APlant* NuevoPlantw = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), FVector(-1315, -50, 160), FRotator::ZeroRotator);

}
