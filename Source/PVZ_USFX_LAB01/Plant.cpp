// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Components/StaticMeshComponent.h"
#include"Zombie.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlantMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant Mesh"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (PlantMesh1.Succeeded())
	{
		PlantMeshComponent->SetStaticMesh(PlantMesh1.Object);
	}
	RootComponent = PlantMeshComponent;
	//PlantMesh->AttachTo(Root);


}
	


void APlant::eliminarZombie(APVZ_USFX_LAB01GameMode* aGameModeBasePVZ)
{

	//AZombie* ZombieActual;
	//ZombieActual = GameModeBasePVZ->vectorZombies.Pop(0);
	//ZombieActual->energia -= 10.0f;
}


// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//void APlant::Temporizador(APlant* Plant)
//{
//	if (Plant)
//	{
//		Plant->Destroy();
//	}
//}
