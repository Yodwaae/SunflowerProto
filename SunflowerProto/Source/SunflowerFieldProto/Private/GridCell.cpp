#include "GridCell.h"
#include "GridSettings.h"

// Sets default values for this component's properties
UGridCell::UGridCell()
{
	// Initialisation
	PrimaryComponentTick.bCanEverTick = true;
	
	// Only temporary, because the custom assets should be the right size and won't need to be scaled
	const FVector Scale = GetDefault<UGridSettings>()->CellSize;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(this);

	// Transform
	TriggerBox->InitBoxExtent(FVector(100.f, 100.f, 100.f));
	TriggerBox->SetRelativeLocation(FVector( .25f, -.25f, 0.f));

	// Overlap 
	TriggerBox->SetCollisionProfileName(TEXT("PlayingField"));
	TriggerBox->SetGenerateOverlapEvents(true);
	
}

void UGridCell::HideCell(bool const bNewHidden){
	this->SetHiddenInGame(bNewHidden);
	this->SetVisibility(!bNewHidden);
}

// Called when the game starts
void UGridCell::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UGridCell::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

