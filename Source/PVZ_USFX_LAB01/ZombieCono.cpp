// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCono.h"

AZombieCono::AZombieCono()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
}
