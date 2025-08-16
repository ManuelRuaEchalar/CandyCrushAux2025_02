#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCono.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloqueCono : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueCono();

protected:
	virtual void BeginPlay() override;
};