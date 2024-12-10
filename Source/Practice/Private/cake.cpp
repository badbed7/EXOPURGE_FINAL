// Fill out your copyright notice in the Description page of Project Settings.


#include "cake.h"

// Sets default values
Acake::Acake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acake::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

