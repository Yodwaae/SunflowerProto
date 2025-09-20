// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayingGrid.generated.h"

UCLASS()
class SUNFLOWERFIELDPROTO_API APlayingGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayingGrid();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true"))
	bool isEven = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=8))
	int32 gridWidth = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=8))
	int32 gridHeight = 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
