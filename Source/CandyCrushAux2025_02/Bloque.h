#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Bloque.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloque : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* MeshComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};