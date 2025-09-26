// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GridCell.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SUNFLOWERFIELDPROTO_API UGridCell : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGridCell();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsOpen;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* CellMesh;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
