// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameMode.h"
#include "ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Paths.h"
#include "FileHelper.h"

AMyGameMode::AMyGameMode() {
	ConstructorHelpers::FObjectFinder<UDataTable> MyDataTableObj(TEXT("UDataTable"));

	if (MyDataTableObj.Succeeded()) {
		MyDataTable = MyDataTableObj.Object;
		UE_LOG(LogTemp, Warning, TEXT("Data Table found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Table not found"));
	}
}

bool AMyGameMode::LoadCsv() {
	Super::BeginPlay();

	FString csvFile = FPaths::ProjectContentDir() + "SetTestTable.csv";
	UE_LOG(LogTemp, Warning, TEXT("Attempting to read csv from path '%s'"), *csvFile);

	if (FPaths::FileExists(csvFile)) {
		FString FileContent; 

		FFileHelper::LoadFileToString(FileContent, *csvFile);

		if (MyDataTable) {
			TArray<FString> problems = MyDataTable->CreateTableFromCSVString(FileContent);

			if (problems.Num() > 0) {
				for (int32 ProbIdx = 0; ProbIdx < problems.Num(); ProbIdx++) {
					//Log the errors
				}
				UE_LOG(LogTemp, Warning, TEXT("Data Table update failed"));

				return false;
			}
			else
			{
				//Updated Successfully
				UE_LOG(LogTemp, Warning, TEXT("Data Table not found"));
				return true;
			}
		}
	}
	return true;
}



