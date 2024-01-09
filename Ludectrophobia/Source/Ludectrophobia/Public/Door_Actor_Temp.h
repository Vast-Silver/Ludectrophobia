#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactibles.h"
#include "Door_Actor_Temp.generated.h"

UCLASS()
class LUDECTROPHOBIA_API ADoor_Actor_Temp : public AActor, public IInteractibles
{
  GENERATED_BODY()

public:
  ADoor_Actor_Temp();

  // Implementierung der IInteractibles-Methoden
  virtual void glow();
  virtual void switch_state();
  virtual void inform_level(int32 Level);

private:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = "true"))
  class UStaticMeshComponent* MeshComponent;

  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = "true"))
  bool bOpen;

  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = "true"))
  bool bHasLock;

  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = "true"))
  bool bUnlocked;

  UPROPERTY()
  class UMaterialInstanceDynamic* DynamicMaterial;
};
