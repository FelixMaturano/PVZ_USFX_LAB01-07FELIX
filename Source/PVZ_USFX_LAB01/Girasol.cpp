// Fill out your copyright notice in the Description page of Project Settings.


#include "Girasol.h"

AGirasol::AGirasol()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshGirasol(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));



	PlantMeshComponent->SetStaticMesh(MeshGirasol.Object);
	PlantMeshComponent->SetRelativeScale3D(FVector(3.5f, 1.5f, 3.5f));
	Tags.Add(TEXT("Girasol"));

	energia = 140;

}

void AGirasol::BeginPlay()
{


}

void AGirasol::Tick(float DeltaTime)
{




}

void AGirasol::SpawnSoles()
{



}
