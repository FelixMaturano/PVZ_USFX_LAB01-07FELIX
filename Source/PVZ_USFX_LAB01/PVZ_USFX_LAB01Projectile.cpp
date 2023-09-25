// Copyright Epic Games, Inc. All Rights Reserve

#include "PVZ_USFX_LAB01Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include"Jugador.h"

APVZ_USFX_LAB01Projectile::APVZ_USFX_LAB01Projectile() 
{
	PrimaryActorTick.bCanEverTick = true;
	// Static reference to the mesh to use for the projectile
	//Referencia estática a la malla para usar en el proyectil
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	//Crear componente de malla para la esfera del proyectil
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &APVZ_USFX_LAB01Projectile::OnHit);		// set up a notification for when this component hits something
																							//configurar una notificación para cuando este componente golpee algo
	RootComponent = ProjectileMesh;															

	// Use a ProjectileMovementComponent to govern this projectile's movement
	//Usar un ProjectileMovementComponent para gobernar el movimiento del proyectil
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 250.0f;
	ProjectileMovement->MaxSpeed = 250.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity//Sin gravedad

	// Die after 3 seconds by default
	//Morir después de 3 segundos por defecto
	MaxDistance = 1000.0f;
	//InitialLifeSpan = 10.0f;
	InitialLifeSpan = MaxDistance / ProjectileMovement->InitialSpeed;
	DamageGenerates = 10.0f;
}

void APVZ_USFX_LAB01Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	// Solo agregar impulso y destruir el proyectil si golpeamos un objeto físico
//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Enemy"))
		{
			OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}

	}

	this->Destroy();
}
void APVZ_USFX_LAB01Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}