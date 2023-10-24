// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB01GameMode.generated.h"

class APotenciador;
class APlant;
class ALanzaguisantes;
class ALanzaboomerang;
class APlantAttack;
class AZombie;
class AZombieComun;
class AGirasol;
class ASPawn;

UCLASS(MinimalAPI)
class APVZ_USFX_LAB01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB01GameMode();
	void PatronesCreacionales();

	///Esto vamos a utilizar para nuestra Orda de Zombies
	TArray<class AZombie*> Zombies;

	TMap<FString, APlant*> Plantas;
	//TMap<APotenciador*, int32> MapPotenciadores;
	TMap<FString, uint32> MapPotenciadores;
	TMap<FString, uint32> MapTarjetasPlantas;

	int32 NumberZombiesOrda = 20;
	int32 NumberZombiesComun = 10;
	int32 NumberZombiesCono = 5;
	int32 NumberZombiesCubo = 2;
	int32 NumberZombiesSenal = 3;

	TMap<FName, int32> mOrdaZombies;
	int32 NumberZombiesSpawned = 0;
	TArray<APlant*> Plantas2;
public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:

	virtual void BeginPlay() override;

	//class AZombieComun* SpawnZombieComun(FVector _spawnPosition);
	//class AZombieCono* SpawnZombieCono(FVector _spawnPosition);
	//class AZombieCubo* SpawnZombieCubo(FVector _spawnPosition);
	//class AZombieSenal* SpawnZombieSenal(FVector _spawnPosition);

	//class APlant* SpawnPlant(FVector _spawnPosition);

	//class ALanzaguisantes* SpawnPlantLanzaguisantes(FVector _spawnPosition);


	float TiempoTranscurrido = 0.0f;
	float TiempoTranscurridoSiguientePala = 0.0f;
	float TiempoTranscurridoSiguienteAbono = 0.0f;

	float TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaNuez = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaLanzamaiz = 0.0f;


	FTimerHandle TimerHandleTarjetasPlantaNuez;
	FTimerHandle TimerHandlePotenciadoresAgua;
	float IncrementarAguaCada = 20.0f;

	////////void TimerCallBackPotenciadoresAgua();
	////////void TimerCallBackTarjetasPlantaNuez();
	////////void VisualizarPotenciadores();
	////////void VisualizarTarjetasPlantas();


	//

	int contador2;
	FVector contador;
	FVector localizacion;

	int FilaActual;
	int ColumnaActual;

	//float TiempoTranscurrido;

	ALanzaguisantes* NuevaPlantaGuisante;
	ALanzaboomerang* NuevaPlantaBoomerang;

	FString NombrePlanta;

	FTimerHandle Temporizador2;

	void MostrarEnergiaDePlantas();
	void AumentoVelocidad();
	void Spawn();

	AZombieComun* NuevoZombie;





};