// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class PVZ_USFX_LAB01_API SSeleccionPlantas : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSeleccionPlantas)
	{}
		 SLATE_ARGUMENT(TWeakObjectPtr<class AHUDPlantas>, OwningHUD)

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
		
	TWeakObjectPtr<class AHUDPlantas> OwningHUD;

	virtual bool SupportsKeyboardFocus() const override { return true; };


	//FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	FReply OnClicked();

	FReply QuitarMenu();

	FReply SpawnPlant();


	
};
