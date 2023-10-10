// Fill out your copyright notice in the Description page of Project Settings.


#include "GrillaPasto.h"

void AGrillaPasto::BeginPlay()
{
	Super::BeginPlay();



}

AGrillaPasto::AGrillaPasto()
{
	TipoGrilla = EHexTileType::PASTO;

	MeshGrilla->SetMaterial(0, MaterialGrilla1);
}