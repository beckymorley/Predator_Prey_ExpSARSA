// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "MyGameMode.generated.h"

USTRUCT(BlueprintType)
struct FTestSelection : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int32 TestNumber;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FString MapSize;
};


/**
 * 
 */
UCLASS()
class DISSOSTARTER_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AMyGameMode(); 

	//virtual void BeginPlay() override; 
public:
	bool LoadCsv();

	UDataTable* MyDataTable;
	
	
};
