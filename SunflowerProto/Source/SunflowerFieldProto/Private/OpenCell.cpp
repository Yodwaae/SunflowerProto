// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenCell.h"
#include "GridSettings.h"
#include "Components/BoxComponent.h"

UOpenCell::UOpenCell()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Initialisation
	// TODO Need all of this only if I use InitBoxExtent which ignore scale, if I instead use setBoxExtent scale is taken into account
	// TODO Also InitBoxExtent use only half size
	const FVector Scale = GetDefault<UGridSettings>()->CellSize;
	const FVector BoxExtent = Scale * 1000;
	const FVector BoxLocation = BoxExtent * FVector(1, -1, 0);
	
	
	// Setting Up TriggerBox
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(this);
	TriggerBox->InitBoxExtent(BoxExtent);
	TriggerBox->SetCollisionProfileName(TEXT("TriggerBox"));
	
	// TODO See how I can put that in the parent since open and close will move something (staticMesh & TriggerBox)
	// IMP Does not take into consideration the scale
	TriggerBox->SetRelativeLocation(BoxLocation);
	
}