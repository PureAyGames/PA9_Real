// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	//Super::BeginPlay();
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);

	float x = FMath::RandRange(spawnRadiusXLow, spawnRadiusXHigh);
	float y = FMath::RandRange(spawnRadiusYLow, spawnRadiusYHigh);
	float z = FMath::RandRange(spawnRadiusZLow, spawnRadiusZHigh);
	FVector spawnLocation = FVector(x, y, z);
	FRotator spawnRotation = FRotator(0, 0, 0);

	GetWorld()->SpawnActor<AActor>(enemyClass, spawnLocation, spawnRotation);

}

