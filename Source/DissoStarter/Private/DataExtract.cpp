// Fill out your copyright notice in the Description page of Project Settings.

#include "DataExtract.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"

bool UDataExtract::SaveArrayText(FString SaveDirectory, FString Filename, TArray<FString> SaveText, bool AllowOverwriting = false) {
	// set complete file path. 
	SaveDirectory += "\\";
	SaveDirectory += Filename;
	if (!AllowOverwriting) {
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
		{
			return false;
		}
	}

	FString FinalString = "";
	for (FString& Each : SaveText)
	{
		FinalString += Each;
		FinalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}





