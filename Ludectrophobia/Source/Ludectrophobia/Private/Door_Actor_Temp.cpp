#include "Door_Actor_Temp.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include <GameFramework/DefaultPawn.h>
#include <LandscapeSplinesComponent.h>


ADoor_Actor_Temp::ADoor_Actor_Temp()
{
  // Set this actor to call Tick() every frame
  PrimaryActorTick.bCanEverTick = true;

  // Initialize default values
  bOpen = false;
  bHasLock = false;
  bUnlocked = false;

  // Create a dynamic material instance for the Static Mesh Component
  MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
  RootComponent = MeshComponent;

  if (MeshComponent && MeshComponent->GetStaticMesh())
  {
    DynamicMaterial = UMaterialInstanceDynamic::Create(MeshComponent->GetMaterial(0), this);
    MeshComponent->SetMaterial(0, DynamicMaterial);
  }
}

void ADoor_Actor_Temp::glow()
{
  // Ändere den Gloweffekt für die Tür 
  if (DynamicMaterial)
  {
    DynamicMaterial->SetScalarParameterValue(TEXT("GlowIntensity"), 1.0f);
  }
}

void ADoor_Actor_Temp::switch_state()
{
  // Ändere den Zustand der Tür zwischen offen und zu
  bOpen = !bOpen;

  // Wenn die Tür verriegelt ist, setze den Zustand auf zu, es sei denn, sie ist entsperrt
  if (bHasLock && !bUnlocked)
  {
    bOpen = false;
  }
}

void ADoor_Actor_Temp::inform_level(int32 Level)
{
}
