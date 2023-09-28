// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileFuego.h"

AProjectileFuego::AProjectileFuego()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> FuegoMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	ProjectileMesh->SetStaticMesh(FuegoMesh.Object);

	InitialSpeed = 10.0f;

	//CantidadDisparos = 5;



}
