// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCell.h"
#include "Components/BoxComponent.h"
#include "OpenCell.generated.h"


/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SUNFLOWERFIELDPROTO_API UOpenCell : public UGridCell
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UOpenCell();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* TriggerBox;
	
};
