// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataExtract.generated.h"
/**
 * 
 */
UCLASS()
class DISSOSTARTER_API UDataExtract : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString SaveDirectory, FString MapSize, FString TestNumber, FString Filename, TArray<FString> SaveText, bool AllowOverwriting);
};


