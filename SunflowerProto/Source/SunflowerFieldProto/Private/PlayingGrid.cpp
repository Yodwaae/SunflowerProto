// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayingGrid.h"

// Sets default values
APlayingGrid::APlayingGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
	// Create Cube Component
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube->SetupAttachment(RootComponent);

	// Add Cube Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (CubeAsset.Succeeded()){
		Cube->SetStaticMesh(CubeAsset.Object);}

}

void APlayingGrid::OnConstruction(const FTransform& Transform)
{
	// Initialisation
	Super::OnConstruction(Transform);

	// Transform changes
	Cube->SetWorldScale3D(FVector(.05f, .05f, .01f));
	Cube->SetRelativeLocation(FVector(2.5f, -2.5f, 0));

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

