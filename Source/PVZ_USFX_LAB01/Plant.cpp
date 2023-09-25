// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "PVZ_USFX_LAB01Projectile.h"
#include "Zombie.h"

// Sets default values
APlant::APlant()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Registra la función para la detección de colisiones
	//OnActorBeginOverlap.AddDynamic(this, &APlant::OnOverlapBegin);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	PlantMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	//PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	//PlantMeshComponent->SetCollisionProfileName(TEXT("Ignore"));
	PlantMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantMeshComponent->SetSimulatePhysics(false);
	PlantMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantMeshComponent;

	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;
	Tags.Add(TEXT("Plant"));

	energia = 1000;
}

//void APlant::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
//{
//	// Verifica si el otro actor es un zombie
//	AZombie* ActualZombie = Cast<AZombie>(OtherActor);
//
//	if (ActualZombie)
//	{
//		TakeDamage(ActualZombie->DamageGenerates, FDamageEvent(), nullptr, this);
//
//		// Reduce la energía de la planta cuando un zombie está cerca
//		// Puedes implementar tu propia lógica para reducir la energía aquí
//		// Por ejemplo, disminuir una variable que represente la energía de la planta
//		// También puedes programar el tiempo entre las reducciones de energía
//	}
//}



// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();

	const FVector direcciondisparo = FVector(10, 10, 100.f);

	//World->GetTimerManager().SetTimer(temporizadordisparo, this, &APlant::disparo(direcciondisparo), 2, true);



}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float APlant::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aquí puedes manejar el daño como desees, por ejemplo, actualizando la salud del actor.
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	Health -= Damage;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	// Devuelve la cantidad de daño que se aplicó realmente.
	return Health;
}
