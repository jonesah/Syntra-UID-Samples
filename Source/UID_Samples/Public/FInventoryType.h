#pragma once

#include "FInventoryType.generated.h"

USTRUCT(BlueprintType)
struct FInventoryType : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description = "";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString AltDescription = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ThirdAltDescription = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FoiurtAltDescription = "";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UTexture2D> Image;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UTexture2D> Image2;

	FInventoryType()
	{
		// Always initialize your USTRUCT variables!
		// exception is if you know the variable type has its own default constructor

		Name = FName("");
		Description = FString("");
		AltDescription = FString("");
		ThirdAltDescription = FString("");
		FoiurtAltDescription = FString("");
	} 
};
