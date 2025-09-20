// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayingGrid.h"

// Sets default values
APlayingGrid::APlayingGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Test de pop un cube
	UStaticMeshComponent* Cube = CreateDefaultSubobject<UStaticMeshComponent>("Cube");
	RootComponent = Cube;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeAsset.Succeeded())
	{
		Cube->SetStaticMesh(CubeAsset.Object);

	}
	
	// // Creating Grid
	// for (int i = 0; i < gridWidth; i++)
	// {
	// 	for (int j = 0; j < gridHeight; j++)
	// 	{
	//
	// 	}
	// }

}

// Called when the game starts or when spawned
void APlayingGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayingGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

