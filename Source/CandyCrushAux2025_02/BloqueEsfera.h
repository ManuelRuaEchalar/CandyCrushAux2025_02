// ==================== BLOQUEESFERA.H ====================
#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueEsfera.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloqueEsfera : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueEsfera();

protected:
	virtual void BeginPlay() override;
};