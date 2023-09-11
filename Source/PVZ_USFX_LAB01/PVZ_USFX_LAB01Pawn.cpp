// Copyright Epic Games, Inc. All Rights Reserved.
// Derechos de autor de Epic Games, Inc. Todos los derechos reservados.

#include "PVZ_USFX_LAB01Pawn.h"
#include "PVZ_USFX_LAB01Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName APVZ_USFX_LAB01Pawn::MoveForwardBinding("MoveForward");
const FName APVZ_USFX_LAB01Pawn::MoveRightBinding("MoveRight");
const FName APVZ_USFX_LAB01Pawn::FireForwardBinding("FireForward");
const FName APVZ_USFX_LAB01Pawn::FireRightBinding("FireRight");

APVZ_USFX_LAB01Pawn::APVZ_USFX_LAB01Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	// Crear el componente de malla
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	// Almacenar en caché nuestro efecto de sonido
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	// Crear un brazo de cámara...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
												// No queremos que el brazo rote cuando la nave lo haga
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level
										// No queremos acercar la cámara cuando colisiona con el nivel
	// Create a camera...
	// Crear una cámara...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm
														// La cámara no gira en relación con el brazo

	// Movement
	// Movimiento de nuestra navesita azul
	MoveSpeed = 1000.0f;
	// Weapon
	// Arma
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}

void APVZ_USFX_LAB01Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	// Configurar las teclas de juego

	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void APVZ_USFX_LAB01Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	// Encontrar dirección de movimiento

	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	// Limitar el tamaño máximo para que (X=1, Y=1) no cause un movimiento más rápido en direcciones diagonales
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	// Calcular el movimiento
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	// Si el tamaño no es cero, mover este actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	// Crear un vector de dirección de disparo

	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	// Intentar disparar un proyectil
	FireShot(FireDirection);
}

void APVZ_USFX_LAB01Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	// Si está bien disparar de nuevo

	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		// Si estamos presionando la palanca de disparo en una dirección

		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			// Generar proyectil en un desplazamiento desde este peón

			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				// Generar el proyectil

				World->SpawnActor<APVZ_USFX_LAB01Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APVZ_USFX_LAB01Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			// Intentar reproducir el sonido si está especificado
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void APVZ_USFX_LAB01Pawn::ShotTimerExpired()
{
	bCanFire = true;
}







