#include "BloqueCapsula.h"

ABloqueCapsula::ABloqueCapsula()
{
	// Cargar la malla de la cápsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule"));
	if (CapsuleMeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(CapsuleMeshAsset.Object);
	}
}

void ABloqueCapsula::BeginPlay()
{
	Super::BeginPlay();

	// Cargar y asignar el material magenta del StarterContent
	UMaterial* MagentaMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/StarterContent/Colors/Material_4.Material_4"));
	if (MagentaMaterial)
	{
		MeshComponent->SetMaterial(0, MagentaMaterial);
	}
}
