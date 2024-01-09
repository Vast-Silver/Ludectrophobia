#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactibles.generated.h"

UINTERFACE(MinimalAPI)
class UInteractibles : public UInterface
{
  GENERATED_BODY()
};

class LUDECTROPHOBIA_API IInteractibles
{
  GENERATED_BODY()

public:

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interactibles")
  void glow();

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interactibles")
  void switch_state();

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interactibles")
  void inform_level(int32 Level);
};
