// Fill out your copyright notice in the Description page of Project Settings.


#include "GridCell.h"
#include "GridSettings.h"

// Sets default values for this component's properties
UGridCell::UGridCell()
{
	// Initialisation
	PrimaryComponentTick.bCanEverTick = false;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	
	// Only temporary, because the custom assets should be the right size and won't need to be scaled
	const FVector Scale = GetDefault<UGridSettings>()->CellScale;
	this->SetWorldScale3D(Scale);
	
	// Adding the StaticMesh
	CellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	CellMesh->SetupAttachment(this);
	if (CubeAsset.Succeeded()){
		CellMesh->SetStaticMesh(CubeAsset.Object);}
	
	// IMP Does not take into consideration the scale
	CellMesh->SetRelativeLocation(FVector(50, -50, 0));
}

void UGridCell::HideCell(bool const bNewHidden) const
{
	CellMesh->SetHiddenInGame(bNewHidden);
	CellMesh->SetVisibility(!bNewHidden);
}

// Called when the game starts
void UGridCell::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UGridCell::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

