// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PVZ_USFX_LAB01Projectile.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(config = Game)
class APVZ_USFX_LAB01Projectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	//componente de colision de esfera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	/** Projectile movement component */
	//componente de movimiento de proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

public:
	APVZ_USFX_LAB01Projectile();

	/** Function to handle the projectile hitting something */
	//funcion para manejar el proyectil golpeando algo
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns ProjectileMesh subobject **/
	//retorna el subobjeto de malla de proyectil
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProjectileMesh; }

	/** Returns ProjectileMovement subobject **/
	//retorna el subobjeto de movimiento de proyectil
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

public:
	// Called every frame
	//llamado cada frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 10.0f;
	float MaxDistance = 400.0f;
};


