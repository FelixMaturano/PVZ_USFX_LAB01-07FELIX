// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombiesComun.h"
#include "ZombieLector.generated.h"

UCLASS()
class PVZ_USFX_LAB01_API AZombieLector : public AActor, public IFZombies
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombieLector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
