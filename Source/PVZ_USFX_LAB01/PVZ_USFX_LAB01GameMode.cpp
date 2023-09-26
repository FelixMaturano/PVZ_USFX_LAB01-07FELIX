// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB01GameMode.h"
#include "PVZ_USFX_LAB01Pawn.h"
#include "Zombie.h"
#include "Plant.h"
#include "Potenciador.h"
#include "Sol.h"
#include "TimerManager.h"

#include"Lanzaguisantes.h"
#include"Repetidora.h"


#include "HUDPlantas.h"
#include "Controlador.h"
#include "Jugador.h"

#include "PlantAttack.h"
#include "Girasol.h"
#include "Nuez.h"
#include "Hongo.h"

#include"SPawn.h"

#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"
#include "ZombieSenal.h"
APVZ_USFX_LAB01GameMode::APVZ_USFX_LAB01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = APVZ_USFX_LAB01Pawn::StaticClass();

	MapPotenciadores.Add(TEXT("Sol"), 0);
	MapPotenciadores.Add(TEXT("Abono"), 1);
	MapPotenciadores.Add(TEXT("Agua"), 2);
	MapPotenciadores.Add(TEXT("Pala"), 0);

	//GetWorldTimerManager().SetTimer(TimerHandlePotenciadoresAgua, this, &APVZ_USFX_LAB02GameMode::TimerCallBackPotenciadoresAgua, IncrementarAguaCada, false);
	// En una función de tu clase que hereda de AActor o UObject
	//GetWorldTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB02GameMode::TimerCallBackTarjetasPlantaNuez, 15.0f, false);

	MapTarjetasPlantas.Add(TEXT("Lanzaguisantes"), 0);
	MapTarjetasPlantas.Add(TEXT("Girasol"), 10);
	MapTarjetasPlantas.Add(TEXT("Nuez"), 10);
	MapTarjetasPlantas.Add(TEXT("Papa"), 0);
	MapTarjetasPlantas.Add(TEXT("Hongo"), 1);
	MapTarjetasPlantas.Add(TEXT("Repetidora"), 10);
	MapTarjetasPlantas.Add(TEXT("PlantaCarnivora"), 10);
	MapTarjetasPlantas.Add(TEXT("Lanzamaiz"), 10);
	MapTarjetasPlantas.Add(TEXT("Patatapulta"), 10);

	TPair<FString, uint32> TarjetaPlanta;
	TarjetaPlanta.Key = TEXT("LanzaChiles");
	TarjetaPlanta.Value = 5;

	MapTarjetasPlantas.Add(TarjetaPlanta);

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


void APVZ_USFX_LAB01GameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();

	FVector SpawnLocationZombie = FVector(-920.0f, 400.0f, 160.0f);

	// Genera 5 zombies
	for (int i = 0; i < 7; i++) {
		// Define una posición temporal para el zombie en X
		SpawnLocationZombie.X += 100;
		// Aparicion de los zombies


		NuevoZombie = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

		NuevoZombie->Velocidad = FMath::FRandRange(0.1, 0.5);

		Zombies.Add(NuevoZombie);

	}


////////	FTransform SpawnLocation;
////////	SpawnLocation.SetLocation(FVector(-1500.0f, 1200.0f, 200.0f));
////////	float initialPositionX = -1500.0f;
////////	float initialPositionY = 1200.0f;
////////
////////	for (int32 i = 0; i < NumberZombiesComun; ++i)
////////	{
////////		AZombieComun* NewZombieComun = SpawnZombieComun(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
////////
////////		if (NewZombieComun)
////////		{
////////			NewZombieComun->SetSpawnAfter(FMath::RandRange(1, 10));
////////			NewZombieComun->SetActorHiddenInGame(true);
////////			NewZombieComun->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
////////			NewZombieComun->SetCanMove(false);
////////			ArrayZombies.Add(NewZombieComun);
////////		}
////////	}
////////
////////	initialPositionX = -1500.0f;
////////	initialPositionY = 1200.0f;
////////
////////	for (int32 i = 0; i < NumberZombiesCono; ++i)
////////	{
////////		AZombieCono* NewZombieCono = SpawnZombieCono(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
////////
////////		if (NewZombieCono)
////////		{
////////			NewZombieCono->SetSpawnAfter(FMath::RandRange(1, 10));
////////			NewZombieCono->SetActorHiddenInGame(true);
////////			NewZombieCono->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
////////			NewZombieCono->SetCanMove(false);
////////			ArrayZombies.Add(NewZombieCono);
////////		}
////////	}
////////
//////////	Aparición de los soles
/////ASol* Sol1 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-400,-50,160), FRotator::ZeroRotator);
//////////ASol* Sol2 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-450, -50, 160), FRotator::ZeroRotator);
////////	initialPositionX = -1500.0f;
////////	initialPositionY = 1200.0f;
////////
////////	for (int32 i = 0; i < NumberZombiesCubo; ++i)
////////	{
////////		AZombieCubo* NewZombieCubo = SpawnZombieCubo(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
////////
////////		if (NewZombieCubo)
////////		{
////////			NewZombieCubo->SetSpawnAfter(FMath::RandRange(1, 10));
////////			NewZombieCubo->SetActorHiddenInGame(true);
////////			NewZombieCubo->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
////////			NewZombieCubo->SetCanMove(false);
////////			ArrayZombies.Add(NewZombieCubo);
////////		}
////////	}
////////
////////	initialPositionX = -1500.0f;
////////	initialPositionY = 1200.0f;
////////
////////	for (int32 i = 0; i < NumberZombiesSenal; ++i)
////////	{
////////		AZombieSenal* NewZombieSenal = SpawnZombieSenal(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
////////
////////		if (NewZombieSenal)
////////		{
////////			NewZombieSenal->SetSpawnAfter(FMath::RandRange(1, 10));
////////			NewZombieSenal->SetActorHiddenInGame(true);
////////			NewZombieSenal->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
////////			NewZombieSenal->SetCanMove(false);
////////			ArrayZombies.Add(NewZombieSenal);
////////		}
////////	}
	//Definiendo la posición de las plantas
	FVector SpawnLocationPlant = FVector(-920.0f, -600.0f, 160.0f);
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
			NuevaPlantaGuisante = GetWorld()->SpawnActor<ALanzaguisantes>(ALanzaguisantes::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

			// Asigna un valor aleatorio a la energía de la planta
			NuevaPlantaGuisante->energia = FMath::FRandRange(0.0, 10.0);

			// Muestra un mensaje en la consola
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlanta->energia);

			// Muestra un mensaje en la pantalla
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia));
			// Muestra un mensaje en el registro de errores
			UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia);

			// Agrega la planta al contenedor de plantas
			Plantas.Add(NombrePlanta, NuevaPlantaGuisante);


			Plantas2.Add(NuevaPlantaGuisante);


			// Coloca la planta en una posición diferente
			//NuevaPlanta->SetActorLocation(FVector(i * 100, 0, 0));


		}
		// Define una posición temporal para la planta en Y
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;

	}

	//FString Mensaje = FString::Printf(TEXT("Encontrada planta: %s"), *NombrePlanta);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, Mensaje);


	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02GameModeBase::aumentovelocidad, 1, true);
		// Definición de un objeto de tipo World
		// //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
	//UWorld* const World = GetWorld();
	//World->GetTimerManager().SetTimer(Temporizador2, this, &APVZ_USFX_LAB01GameMode::MostrarEnergiaDePlantas, 1.f, true);



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

	/*AMegaSol* NewMegasol1 = GetWorld()->SpawnActor<AMegaSol>(FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	MapPotenciadores.Add(NewMegasol1, 1);*/
	MapPotenciadores.Add(TEXT("Megasol"), 1);
	MapPotenciadores.Add(TEXT("AbonoMagico"), 3);
	MapPotenciadores.Add(TEXT("Regadera"), 0);
	MapPotenciadores.Add(TEXT("Pala"), 5);

	
	if (World != nullptr)
	{
		// spawn the projectile
		//World->GetTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB01GameMode::TimerCallBackTarjetasPlantaNuez, 15.0f);

	}

}

void APVZ_USFX_LAB01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	//VisualizarTarjetasPlantas();

	////////if (TiempoTrancurridoSiguienteTarjetaLanzaguisantes > 5.0f)
	////////{
	////////	MapTarjetasPlantas["Lanzaguisantes"] += 1;
	////////	TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	////////}

	////////if (TiempoTrancurridoSiguienteTarjetaGirasol > 10.0f)
	////////{
	////////	MapTarjetasPlantas["Girasol"] += 1;
	////////	TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	////////}

	////////TiempoTrancurridoSiguienteTarjetaLanzaguisantes += DeltaTime;
	////////TiempoTrancurridoSiguienteTarjetaGirasol += DeltaTime;

	////////TiempoTranscurrido += DeltaTime;
	////////TiempoTranscurridoSiguientePala += DeltaTime;
	////////TiempoTranscurridoSiguienteAbono += DeltaTime;

	////////if (TiempoTranscurridoSiguienteAbono >= 10.0f)
	////////{
	////////	MapPotenciadores[TEXT("Abono")] += 1;
	////////	TiempoTranscurridoSiguienteAbono = 0.0f;
	////////	//VisualizarPotenciadores();
	////////}


	////////if (TiempoTranscurridoSiguientePala >= 10.0f)
	////////{
	////////	MapPotenciadores[TEXT("Pala")] += 1;
	////////	TiempoTranscurridoSiguientePala = 0.0f;
	////////	//VisualizarPotenciadores();
	////////}

	//////////	if (ArrayZombies.Num() > 0) {

	////////for (AZombie* ActualZombie : Zombies)
	////////{
	////////	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnAfter: %f"), ActualZombie->GetSpawnAfter()));

	////////	if (ActualZombie && ActualZombie->SpawnAfter <= 0)
	////////	{
	////////		ActualZombie->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));      // Establece la escala de spawn deseada
	////////		ActualZombie->SetActorHiddenInGame(false);      // Haz que el actor sea visible
	////////		ActualZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	////////		ActualZombie->SetCanMove(true);     // Habilita las colisiones si es necesario
	////////		NumberZombiesSpawned += 1;

	////////		Zombies.Remove(ActualZombie);


	////////		for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
	////////		{
	////////			FString Llave = ElementoActual.Key;
	////////			int32 Valor = ElementoActual.Value;
	////////			//UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

	////////			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *ElementoActual.Key, ElementoActual.Value));
	////////		}

	////////	}
	////////	else
	////////	{
	////////		ActualZombie->SpawnAfter -= DeltaTime;
	////////	}
	////////}
	/* }
else {
	VisualizarPotenciadores();
}*/
}


//////void APVZ_USFX_LAB01GameMode::VisualizarPotenciadores() {
//////	for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
//////	{
//////		FString Llave = ElementoActual.Key;
//////		int32 Valor = ElementoActual.Value;
//////		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);
//////
//////		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *Llave, Valor));
//////	}
//////}
//////
//////void APVZ_USFX_LAB01GameMode::VisualizarTarjetasPlantas() {
//////	for (TPair<FString, uint32> TarjetaActual : MapTarjetasPlantas)
//////	{
//////		FString Llave = TarjetaActual.Key;
//////		int32 Valor = TarjetaActual.Value;
//////		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);
//////
//////		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Planta: %s, tiempo recarga: %d"), *Llave, Valor));
//////	}
//////}
//////
//////
//////
//////
////////AZombie* APVZ_USFX_LAB02GameMode::SpawnZombie(FVector _spawnPosition)
////////{
////////	FTransform SpawnLocation;
////////	SpawnLocation.SetLocation(_spawnPosition);
////////	return GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
////////}
//////
//////AZombieComun* APVZ_USFX_LAB01GameMode::SpawnZombieComun(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocation);
//////}
//////
//////AZombieCono* APVZ_USFX_LAB01GameMode::SpawnZombieCono(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocation);
//////}
//////
//////AZombieCubo* APVZ_USFX_LAB01GameMode::SpawnZombieCubo(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocation);
//////}
//////
//////AZombieSenal* APVZ_USFX_LAB01GameMode::SpawnZombieSenal(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<AZombieSenal>(AZombieSenal::StaticClass(), SpawnLocation);
//////}
//////
//////APlant* APVZ_USFX_LAB01GameMode::SpawnPlant(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);
//////}
//////
//////
//////ALanzaguisantes* APVZ_USFX_LAB01GameMode::SpawnPlantLanzaguisantes(FVector _spawnPosition)
//////{
//////	FTransform SpawnLocation;
//////	SpawnLocation.SetLocation(_spawnPosition);
//////	return GetWorld()->SpawnActor<ALanzaguisantes>(ALanzaguisantes::StaticClass(), SpawnLocation);
//////
//////}
//////
//////void APVZ_USFX_LAB01GameMode::TimerCallBackPotenciadoresAgua()
//////{
//////	MapPotenciadores[TEXT("Agua")] += 1;
//////}
//////
//////void APVZ_USFX_LAB01GameMode::TimerCallBackTarjetasPlantaNuez()
//////{
//////	MapTarjetasPlantas[TEXT("Nuez")] += 1;
//////}

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

void APVZ_USFX_LAB01GameMode::AumentoVelocidad()
{
	for (int i = 0; i < Zombies.Num(); i++)
	{
		Zombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}
}
