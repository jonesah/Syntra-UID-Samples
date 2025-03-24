// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/UCharacterInventory.h"

UCharacterInventory* UCharacterInventory::GetInstance()
{
	if(_instance == nullptr)
	{
		_instance = NewObject<UCharacterInventory>() ;
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

UCharacterInventory::UCharacterInventory()
{
	for(int i = 0; i < InventorySize; i++)
	{
		int row = i / InventoryRowSize;
		int column = i % InventoryRowSize;
		InventoryItems.Add(FInventoryItem(row, column));
	}
}

UCharacterInventory::~UCharacterInventory()
{
	_instance = nullptr;
	InventoryItems = TArray<FInventoryItem>();
}

void UCharacterInventory::AddItem(FInventoryItemDefinition definition)
{
	FInventoryItem* item = nullptr;
	for(int i= 0; i < InventoryItems.Num(); i++)
	{
		if(definition.Name == InventoryItems[i].ItemDefinition.Name)
		{
			item = &InventoryItems[i];
		}
	}

	if(item == nullptr)
	{
		for(int i= 0; i < InventoryItems.Num(); i++)
		{
			if(InventoryItems[i].Count == 0)
			{
				item = &InventoryItems[i];
				break;
			}
		}
	}

	if(item != nullptr)
	{
		item->Count++;
		item->ItemDefinition = definition;
	}
}


