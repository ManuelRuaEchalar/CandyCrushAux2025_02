#include "BloqueCubo.h"

ABloqueCubo::ABloqueCubo()
{
	// Cargar la malla del cubo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (CubeMeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(CubeMeshAsset.Object);
	}
}

void ABloqueCubo::BeginPlay()
{
	Super::BeginPlay();

	// Cargar y asignar el material rojo del StarterContent
	UMaterial* RedMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Colors/Material_5.Material_5'"));
	if (RedMaterial)
	{
		MeshComponent->SetMaterial(0, RedMaterial);
	}
}