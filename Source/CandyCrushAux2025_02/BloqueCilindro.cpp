#include "BloqueCilindro.h"

ABloqueCilindro::ABloqueCilindro()
{
	// Cargar la malla del cilindro
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));
	if (CylinderMeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(CylinderMeshAsset.Object);
	}
}

void ABloqueCilindro::BeginPlay()
{
	Super::BeginPlay();

	// Cargar y asignar el material verde del StarterContent
	UMaterial* GreenMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/StarterContent/Colors/Material_2.Material_2"));
	if (GreenMaterial)
	{
		MeshComponent->SetMaterial(0, GreenMaterial);
	}
}