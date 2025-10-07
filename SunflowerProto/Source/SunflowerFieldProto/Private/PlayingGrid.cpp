// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayingGrid.h"
#include "GridCell.h"
#include "GridSettings.h"
#include "Components/BoxComponent.h"

/*
Tried to directly add the static mesh to the actor to get rid of the 1 sec freeze when adding to the scene/selecting in editor, DIDNT WORK

What I am thinking now is, don't use a custom component instead :

	|- Create a trigger box for 'empty' cell
	    - Or for that I still use a customComp, but it'll be lightweight, that way I can put info directly in the comp like coord in the grid
	    |- My Array size is set at Construction and will only be PlayingFieldHeight*PlayingFieldWidth as I don't care about keeping a ref to closed cell, that way I almost already have
	    my 'logic' struct for checking the puzzle
	    |- Furthermore that way cell pos and index in the array are decoupled, I can have a cell be a (2,2) in the grid but be the (0,0) in the playing field

	    - That way I could create every open cell before hand then after placed them by looping the array, while on the other hand I construct the instantiated array for the closed cell
	    - Both logic would be completely independant
	    
	- Create an instantiated mesh with all the closed cell (using a cube static mesh before custom model)
	- Add an onchange on the grid value that will re-trigger the creation of the instanciated mesh instead of in OnConstruction
	- Optionnaly don't do that and display the correct grid only in play mode, not in editor

	- With all of that in mind I'd then need to do the variant with even and odd grid size, propably using two different USceneComp as starting points
	and with 2 different assets for the frame (one thinner than the other)
	
 */


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
	//DrawGrid();
}

/*void APlayingGrid::DrawGrid()
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
}*/

void APlayingGrid::CreateGrid()
{
	// Initialisation
	const FVector CellScale = GetDefault<UGridSettings>()->CellScale; // Not sure if I still need that
	const FVector CellSize = GetDefault<UGridSettings>()->CellSize; // Since cells will always be square could instead store a float and a separate one for thickness
	HasGridBeenCreated = true;


	// Create triggers for playing field
	for (int x = 0; x < PlayingFieldWidth; x++)
	{
		for (int y = 0; y < PlayingFieldHeight; y++)
		{
			//TODO Improving by removing hardcoded values and dividing up the line coord calculation

			// Creation
			UGridCell* TriggerBox = NewObject<UGridCell>(this, UGridCell::StaticClass());
			TriggerBox->SetupAttachment(RootComponent);
			TriggerBox->RegisterComponent();

			// Transform
			//TriggerBox->InitBoxExtent(FVector(.25f, .25f, .01f));
			TriggerBox->SetRelativeLocation(FVector( (PlayingFieldStartingX + y) * .25f, -(PlayingFieldStartingY + x) * .25f, 0.f) * CellScale);

			// Overlap 
			//TriggerBox->SetCollisionProfileName(TEXT("PlayingField"));
			//TriggerBox->SetGenerateOverlapEvents(true);
			
			GridCells.Add(TriggerBox);
		}
	}
	
	/*
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
	*/
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

