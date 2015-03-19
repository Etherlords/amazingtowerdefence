// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "amaizingtowerdefence.h"
#include "amaizingtowerdefenceGameMode.h"
#include "amaizingtowerdefencePlayerController.h"
#include "amaizingtowerdefenceCharacter.h"

AamaizingtowerdefenceGameMode::AamaizingtowerdefenceGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = AamaizingtowerdefencePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}