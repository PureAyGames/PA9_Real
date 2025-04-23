// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"
#include "Enemy.generated.h"

UCLASS()
class PA9_API ASpawner : public AActor
{
GENERATED_BODY()

public:	
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyClass") TSubclassOf<AActor> enemyClass;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusXLow") float spawnRadiusXLow = 500;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusXHigh") float spawnRadiusXHigh = 14300;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusYLow") float spawnRadiusYLow = 500;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusYHigh") float spawnRadiusYHigh = 14300;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusZLow") float spawnRadiusZLow = 250;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnRadiusZHigh") float spawnRadiusZHigh = 950;

// Sets default values for this actor's properties
ASpawner();
virtual void SpawnEnemy();

protected:
// Called when the game starts or when spawned
virtual void BeginPlay() override;

public:	
// Called every frame
virtual void Tick(float DeltaTime) override;

};
