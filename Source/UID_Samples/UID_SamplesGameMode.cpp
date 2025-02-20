// Copyright Epic Games, Inc. All Rights Reserved.

#include "UID_SamplesGameMode.h"
#include "UID_SamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUID_SamplesGameMode::AUID_SamplesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


UCharacterInventory* AUID_SamplesGameMode::GetCharacterInventory()
{
	return UCharacterInventory::GetInstance();
}
