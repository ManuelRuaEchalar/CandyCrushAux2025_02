#include "BloqueEsfera.h"

ABloqueEsfera::ABloqueEsfera()
{
	// Cargar la malla de la esfera
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereMeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(SphereMeshAsset.Object);
	}
}

void ABloqueEsfera::BeginPlay()
{
	Super::BeginPlay();

	// Cargar y asignar el material azul del StarterContent
	UMaterial* BlueMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/StarterContent/Colors/Material_0.Material_0"));
	if (BlueMaterial)
	{
		MeshComponent->SetMaterial(0, BlueMaterial);
	}
}