#pragma once
#include "FInventoryType.h"
#include "FInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FInventoryType Type;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Count;

	FInventoryItem()
	{
		// Always initialize your USTRUCT variables!
		// exception is if you know the variable type has its own default constructor
		Count = 0;
	} 
};
