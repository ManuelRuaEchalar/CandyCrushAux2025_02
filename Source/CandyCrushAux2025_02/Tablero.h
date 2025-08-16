// ==================== TABLERO.H ACTUALIZADO ====================
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Tablero.generated.h"

// Forward declarations
class ABloque;
class ABloqueCubo;
class ABloqueCono;
class ABloqueEsfera;
class ABloqueCilindro;
class ABloqueCapsula;

UCLASS()
class CANDYCRUSHAUX2025_02_API ATablero : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATablero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Componentes de cámara
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* CameraComponent;

	// Dimensiones del tablero
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tablero")
		int32 FilasTablero = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tablero")
		int32 ColumnasTablero = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tablero")
		float EspaciadoBloques = 150.0f;

	// Array para almacenar los bloques
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tablero")
		TArray<ABloque*> Bloques;

	// Función para generar el tablero
	UFUNCTION(BlueprintCallable, Category = "Tablero")
		void GenerarTablero();

	// Función para crear un bloque aleatorio
	ABloque* CrearBloqueAleatorio(FVector Posicion);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
