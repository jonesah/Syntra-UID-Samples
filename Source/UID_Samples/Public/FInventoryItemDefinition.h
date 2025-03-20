#pragma once

#include "FInventoryItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemDefinition : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* IconImage;

	FInventoryItemDefinition()
	{
		Name = "";
		Description = "";
		IconImage = nullptr;
	}
};
