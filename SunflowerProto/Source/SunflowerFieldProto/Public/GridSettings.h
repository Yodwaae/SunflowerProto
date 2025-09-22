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
	UPROPERTY(EditAnywhere, Config, Category="Grid Settings")
	FVector CellSize = FVector(1, 1, 1);
	
};
