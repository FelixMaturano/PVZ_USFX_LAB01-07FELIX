// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzaboomerang.h"

ALanzaboomerang::ALanzaboomerang()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantLanzaboomerang(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	PlantMeshComponent->SetStaticMesh(PlantLanzaboomerang.Object);

	Tags.Add(TEXT("Lanzaboomerang"));

	PlantMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

	CantidadDisparos = 5;

}
