#include "BloqueCono.h"

ABloqueCono::ABloqueCono()
{
	// Cargar la malla del cono
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
	if (ConeMeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(ConeMeshAsset.Object);
	}
}

void ABloqueCono::BeginPlay()
{
	Super::BeginPlay();

	// Cargar y asignar el material amarillo del StarterContent
	UMaterial* YellowMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/StarterContent/Colors/Material_3.Material_3"));
	if (YellowMaterial)
	{
		MeshComponent->SetMaterial(0, YellowMaterial);
	}
}