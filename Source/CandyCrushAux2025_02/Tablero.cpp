// ==================== TABLERO.CPP ACTUALIZADO ====================
#include "Tablero.h"
#include "Bloque.h"
#include "BloqueCubo.h"
#include "BloqueCono.h"
#include "BloqueEsfera.h"
#include "BloqueCilindro.h"
#include "BloqueCapsula.h"
#include "Engine/World.h"

// Sets default values
ATablero::ATablero()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente Spring Arm
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	RootComponent = SpringArmComponent;
	SpringArmComponent->SetUsingAbsoluteRotation(true);
	SpringArmComponent->TargetArmLength = 1000.0f;
	SpringArmComponent->SetRelativeRotation(FRotator(-80.0f, 0.0f, 0.0f)); // Vista superior (planta)


	// Crear el componente de cámara
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void ATablero::BeginPlay()
{
	Super::BeginPlay();

	// Generar el tablero al iniciar
	GenerarTablero();
}

// Called every frame
void ATablero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATablero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATablero::GenerarTablero()
{
	// Limpiar bloques existentes
	for (ABloque* Bloque : Bloques)
	{
		if (Bloque)
		{
			Bloque->Destroy();
		}
	}
	Bloques.Empty();

	// Calcular la posición inicial del tablero (centrado)
	float InicioX = -(ColumnasTablero - 1) * EspaciadoBloques * 0.5f;
	float InicioY = -(FilasTablero - 1) * EspaciadoBloques * 0.5f;

	// Generar bloques en el tablero
	for (int32 Fila = 0; Fila < FilasTablero; Fila++)
	{
		for (int32 Columna = 0; Columna < ColumnasTablero; Columna++)
		{
			FVector PosicionBloque = FVector(
				InicioX + Columna * EspaciadoBloques,
				InicioY + Fila * EspaciadoBloques,
				0.0f
			);

			ABloque* NuevoBloque = CrearBloqueAleatorio(PosicionBloque);
			if (NuevoBloque)
			{
				Bloques.Add(NuevoBloque);
			}
		}
	}
}

ABloque* ATablero::CrearBloqueAleatorio(FVector Posicion)
{
	// Generar número aleatorio entre 0 y 4 para seleccionar tipo de bloque
	int32 TipoBloque = FMath::RandRange(0, 4);

	ABloque* NuevoBloque = nullptr;

	switch (TipoBloque)
	{
	case 0:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueCubo>(ABloqueCubo::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	case 1:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueCono>(ABloqueCono::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	case 2:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueEsfera>(ABloqueEsfera::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	case 3:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueCilindro>(ABloqueCilindro::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	case 4:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueCapsula>(ABloqueCapsula::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	default:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueCubo>(ABloqueCubo::StaticClass(), Posicion, FRotator::ZeroRotator);
		break;
	}

	return NuevoBloque;
}