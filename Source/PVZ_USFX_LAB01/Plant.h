// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plant.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract)
class PVZ_USFX_LAB01_API APlant : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlant();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* PlantMeshComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	//---------------->>>>>>>>>>>>>>>>>>>>>>>>
	int energia;


	

	float TiempoTranscurrido;
	float TiempoEntreDisparos;
	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	float Health = 20.0f;

	void Defender() PURE_VIRTUAL(APlant::Defender, );

private:

};
