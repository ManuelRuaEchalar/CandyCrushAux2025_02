// ==================== CANDYCRUSHAUX2025_02GAMEMODEBASE.CPP ACTUALIZADO ====================
// Copyright Epic Games, Inc. All Rights Reserved.
#include "CandyCrushAux2025_02GameModeBase.h"
#include "Tablero.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

ACandyCrushAux2025_02GameModeBase::ACandyCrushAux2025_02GameModeBase()
{
	// Configurar el DefaultPawnClass como el Tablero
	DefaultPawnClass = ATablero::StaticClass();

	// Inicializar referencia
	TableroActual = nullptr;
}

void ACandyCrushAux2025_02GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// Crear el tablero al iniciar el juego
	CrearTablero();
	// Imprimir "hola" en la pantalla usando GEngine
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("hola"));
		}
}

void ACandyCrushAux2025_02GameModeBase::CrearTablero()
{
	// Si ya existe un tablero, destruirlo primero
	if (TableroActual)
	{
		TableroActual->Destroy();
		TableroActual = nullptr;
	}

	// Crear nuevo tablero en el centro del mundo
	FVector PosicionTablero = FVector(0.0f, 0.0f, 0.0f);
	FRotator RotacionTablero = FRotator::ZeroRotator;

	TableroActual = GetWorld()->SpawnActor<ATablero>(ATablero::StaticClass(), PosicionTablero, RotacionTablero);

	if (TableroActual)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tablero creado exitosamente"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al crear el tablero"));
	}
}
