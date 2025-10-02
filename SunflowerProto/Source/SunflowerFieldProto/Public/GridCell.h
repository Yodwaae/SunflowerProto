// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GridCell.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SUNFLOWERFIELDPROTO_API UGridCell : public USceneComponent
{
	GENERATED_BODY()

	protected:
	
		UPROPERTY(VisibleAnywhere)
		UBoxComponent* TriggerBox;
	
		virtual void BeginPlay() override;
		
	public:
	
		UGridCell();
		virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		void HideCell(const bool bNewHidden);

};
