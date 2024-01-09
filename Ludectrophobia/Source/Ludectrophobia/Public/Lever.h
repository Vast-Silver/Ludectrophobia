#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactibles.h"
#include "Lever.generated.h"

UCLASS()
class LUDECTROPHOBIA_API ALever : public AActor, public IInteractibles
{
	GENERATED_BODY()

public:
	ALever();

	// Implementierung der IInteractibles-Methoden
	virtual void glow();
	virtual void switch_state();
	virtual void inform_level(int32 Level);

	// Eigene Methoden
	UFUNCTION(BlueprintCallable, Category = "Lever")
	int32 get_target_index() const;

	UFUNCTION(BlueprintCallable, Category = "Lever")
	bool get_active() const;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lever", meta = (AllowPrivateAccess = "true"))
	bool bActive;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lever", meta = (AllowPrivateAccess = "true"))
	int32 TargetIndex;
};
