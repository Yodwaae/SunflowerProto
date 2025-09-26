// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayingGrid.h"
#include "GridCell.h"
#include "GridSettings.h"

// Sets default values
APlayingGrid::APlayingGrid()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void APlayingGrid::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Create and/or Update the Grid
	if (!HasGridBeenCreated)
		CreateGrid();
	DrawGrid();
}

void APlayingGrid::DrawGrid()
{
	// Loop through each cell in the grid
	for (int x = 0; x < MaxGridWidth; x++)
	{
		for (int y = 0; y < MaxGridHeight; y++)
		{
			// Get the cell
			const int32 Index = GetCellIndex(x, y);
			const UGridCell* Cell = GridCells[Index];

			// If Cell is in the playing field hide it, otherwise show it
			Cell->HideCell(IsInPlayingField({x, y}));
		}
	}
}

void APlayingGrid::CreateGrid()
{
	// Initialisation
	const FVector Scale = GetDefault<UGridSettings>()->CellSize;
	HasGridBeenCreated = true;
	
	// Creating Grid
	for (int x = 0; x < MaxGridWidth; x++)
	{
		for (int y = 0; y < MaxGridHeight; y++)
		{
			// Create and place the cell
			// Note: No security check because i'd rather the program crash if creation failed than it keeps going with an invalid grid in consequence
			UGridCell* Cell = NewObject<UGridCell>(this, UGridCell::StaticClass());
			Cell->SetupAttachment(RootComponent);
			Cell->SetRelativeLocation(FVector(y * 100.f, -x * 100.f, 0.0f) * Scale);
			GridCells.Add(Cell);
		}
	}
}

void APlayingGrid::BeginPlay()
{
	// Initialisation
	Super::BeginPlay();
	
}

// Called every frame
void APlayingGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

