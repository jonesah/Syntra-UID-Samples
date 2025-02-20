// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UCharacterInventory.generated.h"
/**
 * 
 */
UCLASS()
class UID_SAMPLES_API UCharacterInventory : public UObject
{
	GENERATED_BODY()
private:
	static UCharacterInventory* _instance;
public:
	
	static UCharacterInventory* GetInstance();

	UFUNCTION(BlueprintCallable)
	void Print();
	
};

UCharacterInventory* UCharacterInventory::_instance = nullptr;