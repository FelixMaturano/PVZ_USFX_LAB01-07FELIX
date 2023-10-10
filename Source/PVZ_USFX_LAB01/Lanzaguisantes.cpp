// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzaguisantes.h"

ALanzaguisantes::ALanzaguisantes()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	MeshPlanta->SetStaticMesh(PlantMesh.Object);

	Tags.Add(TEXT("Lanzaguisantes"));

	MeshPlanta->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

	CantidadDisparos = 5;

}
