// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab3_Das_ShilaGameMode.h"
#include "Lab3_Das_ShilaPlayerController.h"
#include "Lab3_Das_ShilaCharacter.h"
#include "UObject/ConstructorHelpers.h"

DEFINE_LOG_CATEGORY(LogMyGameMode)

ALab3_Das_ShilaGameMode::ALab3_Das_ShilaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALab3_Das_ShilaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	UE_LOG(LogMyGameMode, Display, TEXT("Hello from game mode"));
}