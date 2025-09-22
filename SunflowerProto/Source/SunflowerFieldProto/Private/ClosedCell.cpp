// Fill out your copyright notice in the Description page of Project Settings.


#include "ClosedCell.h"


UClosedCell::UClosedCell()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Initialisation
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	
	// Adding the StaticMesh
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	StaticMesh->SetupAttachment(this);
	
	// TODO See how I can put that in the parent since open and close will move something (staticMesh & TriggerBox)
	// IMP Does not take into consideration the scale
	StaticMesh->SetRelativeLocation(FVector(50, -50, 0));
	
	if (CubeAsset.Succeeded()){
		StaticMesh->SetStaticMesh(CubeAsset.Object);}
}