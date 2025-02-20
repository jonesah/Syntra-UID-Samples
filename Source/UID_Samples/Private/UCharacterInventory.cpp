// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/UCharacterInventory.h"

UCharacterInventory* UCharacterInventory::GetInstance()
{
	if(_instance == nullptr)
	{
		_instance = NewObject<UCharacterInventory>();
	}

	return _instance;
}

void UCharacterInventory::Print()
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1,
15.0f, FColor::Yellow,
TEXT("Inside the CharacterInventory"));
}


