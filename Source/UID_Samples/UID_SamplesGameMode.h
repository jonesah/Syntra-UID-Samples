// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Public/UCharacterInventory.h"
#include "UID_SamplesGameMode.generated.h"

UCLASS(minimalapi)
class AUID_SamplesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUID_SamplesGameMode();

	UFUNCTION(BlueprintCallable)
	UCharacterInventory* GetCharacterInventory();
};



