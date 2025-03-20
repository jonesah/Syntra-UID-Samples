#pragma once
#include "FInventoryItemDefinition.h"
#include "FInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Count = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItemDefinition ItemDefinition;

	FInventoryItem()
	{
		Count = 0;
	}
};
