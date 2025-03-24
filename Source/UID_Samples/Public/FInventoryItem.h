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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Row = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Column = 0;

	int Test = 0;
	
	FInventoryItem()
	{
		Count = 0;
		Row = 0;
		Column = 0;
	}

	FInventoryItem(int row, int column)
	{
		Row = row;
		Column = column;
	}
};
