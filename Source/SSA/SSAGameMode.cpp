// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SSA.h"
#include "SSAGameMode.h"
#include "SSACharacter.h"

ASSAGameMode::ASSAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScroller/Blueprints/Eve"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
