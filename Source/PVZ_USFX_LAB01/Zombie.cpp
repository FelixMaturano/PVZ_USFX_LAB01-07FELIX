// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

#include "Plant.h"
#include "PVZ_USFX_LAB01Projectile.h"


// Sets default values
AZombie::AZombie()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Registra la funci�n para la detecci�n de colisiones
	//OnActorBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBegin);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	//ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	ZombieMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshComponent->SetSimulatePhysics(true);
	ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshComponent;

	// Asignar la funci�n de evento a OnOverlapBegin del componente de colisi�n

	//ZombieMeshComponent->OnComponentHit.AddDynamic(this, &AZombie::OnHit);		// set up a notification for when this component hits something
	ZombieMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	Tags.Add(TEXT("Enemy"));
	DamageGenerates = 10.0f;
	Health = 1000.0f;
	MovementSpeed = 0.1f;
	bCanMove = false;
	energia = 20;
	Velocidad = 0.001f;// Esto define la velocidad 

}
// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();

	//SetLifeSpan(10);
}


void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LocalizacionObjetivo = FVector(-800.0f, -600.0f, 160.0f); // Cambia la ubicaci�n objetivo seg�n tus necesidades
	// Calcula la direcci�n y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	// Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());




	// Calcula el desplazamiento en este frame
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaAlObjetivo)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
		//this->SetActorRotation(NewRotation);
	}
	else
	{
		// Mueve el objeto en la direcci�n calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);

	}



	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


}

void AZombie::morir()
{
	Destroy();			//El actor se destruye
	this->Destroy();		//El actor tambi�n se destruye
	SetActorHiddenInGame(true);	//El actor s�lo desaparece
}


void AZombie::OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

	if ((OverlappedComponent != nullptr) && (OtherActor != this))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Plant"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisi�n con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}
	}
}

void AZombie::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Plant"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisi�n con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}

	}
}





float AZombie::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aqu� puedes manejar el da�o como desees, por ejemplo, actualizando la salud del actor.
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	Health -= Damage;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));
	// Devuelve la cantidad de da�o que se aplic� realmente.
	return Health;
}

void AZombie::MoveToTarget(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Calcula el desplazamiento en este frame
	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la direcci?n calculada
		this->AddActorWorldOffset(Direction * DeltaMove);
	}

}

