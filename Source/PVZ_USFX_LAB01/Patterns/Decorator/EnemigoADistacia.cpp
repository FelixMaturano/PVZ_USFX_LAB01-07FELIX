// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoADistacia.h"

void AEnemigoADistacia::Pelear()
{
	//Agrega el codigo que desees


	//Llama a la funcion de la clase padre para que se ejecute
	Super::Pelear();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El enemigo dispara"));
}

int AEnemigoADistacia::GetDano()
{
	//Agrega el codigo que desees


	//Retorna el dano de la clase padre mas 20
	return Super::GetDano() + 20;
}

void AEnemigoADistacia::Morir()
{
	//Agrega el codigo que desees


	//Llama a la funcion de la clase padre para que se ejecute
	Super::Morir();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El enemigo a distancia se muere"));
}

