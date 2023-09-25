// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "PlantAttack.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB01_API APlantAttack : public APlant
{
	GENERATED_BODY()
public:
	 
	APlantAttack();

	void AtaquePlanta();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected: 

	FTimerHandle ManejoTiempo;

protected:

	void FireShot(FVector FireDirection);
	//void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

		/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;
	
	void ShotTimerExpired();


	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
};
