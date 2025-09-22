// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCell.h"
#include "ClosedCell.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SUNFLOWERFIELDPROTO_API UClosedCell : public UGridCell
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UClosedCell();

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;
	
};
