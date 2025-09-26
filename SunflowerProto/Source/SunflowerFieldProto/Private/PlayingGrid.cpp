// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayingGrid.h"
#include "GridCell.h"
#include "GridSettings.h"

// Sets default values
APlayingGrid::APlayingGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
}

void APlayingGrid::OnConstruction(const FTransform& Transform)
{
	// Initialisation
	Super::OnConstruction(Transform);
	const FVector Scale = GetDefault<UGridSettings>()->CellSize;
	
	// Creating Grid
	for (int i = 0; i < MaxGridWidth; i++)
	{
		for (int j = 0; j < MaxGridHeight; j++)
		{
			// TODO Might replace with NewNamedObject
			UGridCell* Cell = NewObject<UGridCell>(this, UGridCell::StaticClass());
			if (Cell)
			{
				Cell->SetupAttachment(RootComponent);
				Cell->SetRelativeLocation(FVector(j * 100.f, -i * 100.f, 0.0f) * Scale);
			}
		}
	}
	// // Creating Grid
	// for (int i = 0; i < GridWidth; i++)
	// {
	// 	for (int j = 0; j < GridHeight; j++)
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

