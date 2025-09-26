// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCell.h"
#include "PlayingGrid.generated.h"

UCLASS()
class SUNFLOWERFIELDPROTO_API APlayingGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayingGrid();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true"))
	bool IsEven = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=10))
	int32 PlayingFieldWidth = 8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=10))
	int32 PlayingFieldHeight = 8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=0, ClampMax=9))
	int32 PlayingFieldStartingX = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=0, ClampMax=9))
	int32 PlayingFieldStartingY = 1;
	
private:
	
	UPROPERTY(EditAnywhere, Category="PlayingGrid")
	int32 MaxGridWidth = 10;
	UPROPERTY(EditAnywhere, Category="PlayingGrid")
	int32 MaxGridHeight = 10;
	UPROPERTY(EditAnywhere, Category="PlayingGrid")
	bool HasGridBeenCreated = false;
	UPROPERTY(EditAnywhere, Category="PlayingGrid")
	TArray<UGridCell*> GridCells;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;
	
	void CreateGrid();
	void DrawGrid();
	
	int32 GetCellIndex(int32 x, int32 y) const
	{
		return y * MaxGridWidth + x;
	}

	bool IsInPlayingField(int32 x, int32 y) const
	{
		 return ((x >= PlayingFieldStartingX and x < PlayingFieldStartingX + PlayingFieldWidth) and (y >= PlayingFieldStartingY and y < PlayingFieldStartingY + PlayingFieldHeight));
	}
	
};
