// ==================== BLOQUECILINDRO.H ====================
#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCilindro.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloqueCilindro : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueCilindro();

protected:
	virtual void BeginPlay() override;
};