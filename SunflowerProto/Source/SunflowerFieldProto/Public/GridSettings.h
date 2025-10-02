// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GridSettings.generated.h"

/**
 * 
 */
UCLASS(config = Game)
class SUNFLOWERFIELDPROTO_API UGridSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	// Cell Size used by tetro pieces and playing grid
	UPROPERTY(EditAnywhere, Config, Category="Grid Settings")
	FVector CellScale = FVector(.05f, .05f, .01f);

	UPROPERTY(EditAnywhere, Config, Category="Grid Settings")
	FVector CellSize = FVector(5.f, 5.f, .1f);
	
};
