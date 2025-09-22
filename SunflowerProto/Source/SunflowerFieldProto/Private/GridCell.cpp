// Fill out your copyright notice in the Description page of Project Settings.


#include "GridCell.h"
#include "GridSettings.h"

// Sets default values for this component's properties
UGridCell::UGridCell()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	const FVector Scale = GetDefault<UGridSettings>()->CellSize;
	this->SetWorldScale3D(Scale);
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

