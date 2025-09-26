// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GridCell.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SUNFLOWERFIELDPROTO_API UGridCell : public USceneComponent
{
	GENERATED_BODY()
	
#pragma region ========== VARIABLES ==========

	protected:
		
		UPROPERTY(EditAnywhere)
		UStaticMeshComponent* CellMesh;
	
	public:	
		
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool IsOpen;


#pragma endregion

#pragma region ========== FUNCTIONS ==========

	protected:
		virtual void BeginPlay() override;
		
	public:

	#pragma region ===== UE FUNCTIONS =====
	
		UGridCell();
		virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	#pragma endregion

	#pragma region ===== CUSTOM FUNCTIONS ========
	
		void HideCell(const bool bNewHidden) const;
	
	#pragma endregion

#pragma endregion

};
