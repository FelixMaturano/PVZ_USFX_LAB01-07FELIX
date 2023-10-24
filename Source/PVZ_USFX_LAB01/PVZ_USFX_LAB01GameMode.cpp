// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB01GameMode.h"
#include "PVZ_USFX_LAB01Pawn.h"
#include "Zombie.h"
#include "Plant.h"
#include "Potenciador.h"
#include "Sol.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

#include"Lanzaguisantes.h"
#include "Lanzaboomerang.h"

#include "HUDPlantas.h"
#include "Controlador.h"
#include "Jugador.h"

#include "PlantAttack.h"
#include "Girasol.h"
#include"SPawn.h"

#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"


#include "Patterns/FactoryMethod/FactoryMethod_Principal.h"
#include "Patterns/Decorator/Decorator_Principal.h"


APVZ_USFX_LAB01GameMode::APVZ_USFX_LAB01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;

	///////////

	//Definiendo el Pawn o Peon
	DefaultPawnClass = AJugador::StaticClass();
	//Definiendo el Controlador
	PlayerControllerClass = AControlador::StaticClass();
	//Definiendo el HUD
	HUDClass = AHUDPlantas::StaticClass();



	contador = FVector(0, 0, 0);
	localizacion = FVector(400.0, 200.0, 100.0);
	contador2 = 0;

	TiempoTranscurrido = 0.0f;


	FilaActual = 1;
	ColumnaActual = 1;

}

void APVZ_USFX_LAB01GameMode::PatronesCreacionales()
{
	//AFactoryMethod_Principal* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Principal>(AFactoryMethod_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	ADecorator_Principal* Decorator = GetWorld()->SpawnActor<ADecorator_Principal>(ADecorator_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AObserver_Principal* Observer = GetWorld()->SpawnActor<AObserver_Principal>(AObserver_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

}


void APVZ_USFX_LAB01GameMode::BeginPlay()
{
	Super::BeginPlay();

	PatronesCreacionales();


	UWorld* const World = GetWorld();

	FVector SpawnLocationZombie = FVector(-1500.0f, 1200.0f, 200.0f);
	//=========================================================================
	// Genera 5 zombies
	for (int i = 0; i < 7; i++) {
		// Define una posición temporal para el zombie en X
		SpawnLocationZombie.X += 100;
		// Aparicion de los zombies


		NuevoZombie = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

		NuevoZombie->Velocidad = FMath::FRandRange(0.1, 0.2);

		Zombies.Add(NuevoZombie);

	}

	
	////////	}
		//Definiendo la posición de las plantas



	//..............................................................................................
	FVector SpawnLocationPlant = FVector(-1500.0f, -1000.0f, 200.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	// Genera 5 plantas
	for (int i = 0; i < 7; i++)
	{
		//Define una posicion temporal para la planta en X
		SpawnLocationPlantTemp.X += 100;



		for (int j = 0; j < 2; j++)
		{

			// Define una posición temporal para la planta en Y
			SpawnLocationPlantTemp.Y += 100;

			// Genera un nombre para la planta
			NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), i + 1, j + 1); // Cambio en la generación del nombre

			// Crea una nueva instancia de APlant en el mundo
			NuevaPlantaBoomerang = GetWorld()->SpawnActor<ALanzaboomerang>(ALanzaboomerang::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

			// Asigna un valor aleatorio a la energía de la planta
			NuevaPlantaBoomerang->energia = FMath::FRandRange(0.0, 10.0);

			// Muestra un mensaje en la consola
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlanta->energia);

			// Muestra un mensaje en la pantalla
		//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaBoomerang->energia));
			// Muestra un mensaje en el registro de errores
		//	UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaBoomerang->energia);

			// Agrega la planta al contenedor de plantas
			Plantas.Add(NombrePlanta, NuevaPlantaBoomerang);


			Plantas2.Add(NuevaPlantaBoomerang);


			// Coloca la planta en una posición diferente
			//NuevaPlanta->SetActorLocation(FVector(i * 100, 0, 0));


		}
		// Define una posición temporal para la planta en Y
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;

	}

	//FString Mensaje = FString::Printf(TEXT("Encontrada planta: %s"), *NombrePlanta);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, Mensaje);


//	World->GetTimerManager().SetTimer(Temporizador2, this, &APVZ_USFX_LAB01GameMode::aumentovelocidad, 1, true);
		// Definición de un objeto de tipo World
		// //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
	//UWorld* const World = GetWorld();
////	World->GetTimerManager().SetTimer(Temporizador2, this, &APVZ_USFX_LAB01GameMode::MostrarEnergiaDePlantas, 1.f, true);



	//////initialPositionX = -1500.0f;
	//////initialPositionY = 100.0f;
	//////for (int i = 0; i < 5; i++)
	//////{
	//////	ALanzaguisantes* NewLanzaguisantes = SpawnPlantLanzaguisantes(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//////	if (NewLanzaguisantes)
	//////	{
	//////		NewLanzaguisantes->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//////		aPlantas.Add(NewLanzaguisantes);
	//////	}


	//////	for (int j = 0; j < 2; j++) {
	//////		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//////		aPlantas.Add(NewLanzaguizantes);
	//////	}
	//////}

	//initialPositionX = -1500.0f;
	//initialPositionY = 1000.0f;
	//for (int i = 0; i < 5; i++)
	//{
	//	AZombie* NewZombie = SpawnZombie(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
	//	//NewZombie->SetActorEnableCollision(true);
	//	NewZombie->SetCanMove(true);
	//}



}

void APVZ_USFX_LAB01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	
}


void APVZ_USFX_LAB01GameMode::Spawn()
{
	contador2++;

	contador = contador + FVector(100, 0, 0);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


	AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), localizacion, FRotator::ZeroRotator);



	localizacion.X = localizacion.X + contador2 * 100;
	localizacion.Y = localizacion.Y + contador2 * 100;
	//localizacion = localizacion + contador;




}

void APVZ_USFX_LAB01GameMode::AumentoVelocidad()
{
	for (int i = 0; i < Zombies.Num(); i++)
	{
		Zombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}
}


void APVZ_USFX_LAB01GameMode::MostrarEnergiaDePlantas()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));

	NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), FilaActual, ColumnaActual);

	APlant* Planta = Plantas.FindRef(NombrePlanta);

	if (Planta)
	{
		FString Mensaje = FString::Printf(TEXT("%s: Energia %i"), *NombrePlanta, Planta->energia);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("No se encontró la planta")));
	}

	ColumnaActual++;

	if (ColumnaActual > 2) // Ajusta este valor al número total de columnas
	{
		ColumnaActual = 1;
		FilaActual++;

		if (FilaActual > 5) // Ajusta este valor al número total de filas
		{
			FilaActual = 1;
		}
	}

}



