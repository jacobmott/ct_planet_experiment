// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ct_planet_experimentHUD.generated.h"

UCLASS()
class Act_planet_experimentHUD : public AHUD
{
	GENERATED_BODY()

public:
	Act_planet_experimentHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

