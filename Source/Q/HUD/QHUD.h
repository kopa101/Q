
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "QHUD.generated.h"

class UQOverlay;

UCLASS()
class Q_API AQHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditDefaultsOnly, Category = Q)
	TSubclassOf<UQOverlay> QOverlayClass;

	UPROPERTY()
	UQOverlay* QOverlay;
public:
	FORCEINLINE UQOverlay* GetQOverlay() const { return QOverlay; }
};