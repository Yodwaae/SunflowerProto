// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GridCell.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"

#include "PlayingGrid.generated.h"

UCLASS()
class SUNFLOWERFIELDPROTO_API APlayingGrid : public AActor
{
	GENERATED_BODY()

#pragma region ========== VARIABLES ==========
	
	public:	

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true"))
		bool IsEven = true;

	#pragma region ===== PLAYING FIELD =====
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=10))
		int32 PlayingFieldWidth = 8;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=1, ClampMax=10))
		int32 PlayingFieldHeight = 8;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=0, ClampMax=9))
		int32 PlayingFieldStartingX = 1;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayingGrid", meta=(ExposeOnSpawn="true", ClampMin=0, ClampMax=9))
		int32 PlayingFieldStartingY = 1;

	#pragma endregion
		
	private:

	#pragma region ===== GRID =====
	
		UPROPERTY(EditAnywhere, Category="PlayingGrid")
		int32 MaxGridWidth = 10;
		UPROPERTY(EditAnywhere, Category="PlayingGrid")
		int32 MaxGridHeight = 10;
		UPROPERTY(EditAnywhere, Category="PlayingGrid")
		bool HasGridBeenCreated = false;
		UPROPERTY(EditAnywhere, Category="PlayingGrid")
		TArray<UGridCell*> GridCells;
		UPROPERTY(EditAnywhere, Category="PlayingGrid")
		TArray<UBoxComponent*> PlayingFieldCells;

	#pragma endregion

#pragma endregion
	
#pragma region ========== FUNCTIONS ==========
	
	protected:
		virtual void BeginPlay() override;

	public:

	#pragma region ===== UE FUNCTIONS =====
		
		APlayingGrid();
		virtual void Tick(float DeltaTime) override;
		virtual void OnConstruction(const FTransform& Transform) override;
		
	#pragma endregion

	#pragma region ===== CUSTOM FUNCTIONS =====	
		void CreateGrid();
		//void DrawGrid();

		#pragma region === INLINE FUNCTIONS ====
		
		int32 GetCellIndex(int32 x, int32 y) const
		{
			return y * MaxGridWidth + x;
		}

		bool IsInPlayingField(FIntPoint pos) const
		{
			const bool InsideX = (pos.X >= PlayingFieldStartingX) && (pos.X <  PlayingFieldStartingX + PlayingFieldWidth);
			const bool InsideY = (pos.Y >= PlayingFieldStartingY) && (pos.Y <  PlayingFieldStartingY + PlayingFieldHeight);
			return InsideX && InsideY;
		}
		
		#pragma endregion
		
	#pragma endregion

#pragma endregion
	
};
