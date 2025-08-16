#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCubo.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloqueCubo : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueCubo();

protected:
	virtual void BeginPlay() override;
};