// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB01GameMode.h"
#include "PVZ_USFX_LAB01Pawn.h"
#include "Zombie.h"
#include "Plant.h"

APVZ_USFX_LAB01GameMode::APVZ_USFX_LAB01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB01Pawn::StaticClass();

	TiempoTranscurrido = 0.0f;
}

void APVZ_USFX_LAB01GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Lugar donde quieras crear la instancia del objeto de planta
	//FVector SpawnLocation1 = FVector(-850.0f, 400.0f, 160.0f); // Cambia las coordenadas según tus necesidades

	//AZombie* NewZombieActor1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation1, FRotator::ZeroRotator);

	//FVector SpawnLocation2 = FVector(-500.0f, 200.0f, 160.0f); // Cambia las coordenadas según tus necesidades

	//AZombie* NewZombieActor2 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation2, FRotator::ZeroRotator);
	//

	//// Lugar donde quieras crear la instancia del objeto
	//FVector MinSpawnLocation = FVector(-1000.0f, -1000.0f, 0.0f);
	//FVector MaxSpawnLocation = FVector(1000.0f, 1000.0f, 0.0f);

	//float RandomX = FMath::RandRange(MinSpawnLocation.X, MaxSpawnLocation.X);
	//float RandomY = FMath::RandRange(MinSpawnLocation.Y, MaxSpawnLocation.Y);
	//float Z = 180.0f; // Altura en Z

	//FVector SpawnLocation = FVector(RandomX, RandomY, Z);

	//AZombie* NewZombieActor3 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation, FRotator::ZeroRotator);


	FVector SpawnLocationZombie = FVector(-800.0f, 400.0f, 160.0f);

	// Crear objetos y agregarlos al vector
	// Se crean los Zombies dinamicamente
	for (int i = 0; i < 5; i++) {

		SpawnLocationZombie.X += 200;

		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

		NuevoZombie->MovementSpeed = FMath::FRandRange(0.1,0.5);

		vectorZombies.Add(NuevoZombie);
	}




	//Se crean las plantas dinamicamente
	FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	//Genera 5 plantas
	for (int i = 0; i < 5; i++) {

		//Define una pocision temporal para las plantas en el eje X
		SpawnLocationPlantTemp.X += 200;
		for (int j = 0; j < 2; j++) {
		
			//Define una pocision temporal para las plantas en el eje Y
			SpawnLocationPlantTemp.Y += 80;

			//Genera u nombre para la planta
			FString NombrePlanta = FString::Printf(TEXT("Planta%d"), i+1);

			//Crea una nueva instancia de Aplat en el mundo
			APlant* NuevoPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

			//Asina un valor aleatorio a la energia de la planta
			NuevoPlant->energia = FMath::FRandRange(0.0, 10.0);

			//Muestra un mensaje en la consola 
			UE_LOG(LogTemp, Warning, TEXT("	Energia de %s: %i"), *NombrePlanta, NuevoPlant->energia);
			//Muestra un mensaje en la pantalla
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf( TEXT("Energia de % s: % i"),*NombrePlanta,NuevoPlant->energia));

			//Agrega la planta al contenedor de plantas
			mapPlants.Add(NombrePlanta,NuevoPlant);

			//Coloca las plantas en una pocision diferente 
			//NuevoPlant->SetActorLocation(FVector(i*100,0,0));
			
		}
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	}
	
	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB01GameMode::aumentarVelocidad, 1, true);
}

void APVZ_USFX_LAB01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	if (TiempoTranscurrido > 2.0f) {
		// Iterar sobre el vector de objetos
		for (int i = 0; i < vectorZombies.Num(); i++) {
			vectorZombies[i]->MovementSpeed = FMath::FRand() * 0.1f;
			//vectorZombies[i]->MovementSpeed += i * 1.0f;
		}
		TiempoTranscurrido = 0.0f;
	}

}

void APVZ_USFX_LAB01GameMode::aumentarVelocidad()
{
	for (int i = 0; i < vectorZombies.Num(); i++) {
		vectorZombies[i]->MovementSpeed =+FMath ::FRandRange(0,0.2);
	}

}

//// Called when the game starts or when spawned
//void APVZ_USFX_LAB01GameMode::BeginPlay()
//{
//	Super::BeginPlay();
//
//}