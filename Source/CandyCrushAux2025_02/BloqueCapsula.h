#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCapsula.generated.h"

UCLASS()
class CANDYCRUSHAUX2025_02_API ABloqueCapsula : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueCapsula();

protected:
	virtual void BeginPlay() override;
};