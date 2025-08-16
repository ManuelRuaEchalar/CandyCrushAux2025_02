// ==================== CANDYCRUSHAUX2025_02GAMEMODEBASE.H ACTUALIZADO ====================
// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CandyCrushAux2025_02GameModeBase.generated.h"

// Forward declaration
class ATablero;

/**
 *
 */
UCLASS()
class CANDYCRUSHAUX2025_02_API ACandyCrushAux2025_02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACandyCrushAux2025_02GameModeBase();

protected:
	virtual void BeginPlay() override;

	// Referencia al tablero
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
		ATablero* TableroActual;

	// Función para instanciar el tablero
	UFUNCTION(BlueprintCallable, Category = "Game")
		void CrearTablero();
};