#include "Door.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include <GameFramework/DefaultPawn.h>
#include <LandscapeSplinesComponent.h>


ADoor::ADoor()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Initialize default values
    bOpen = false;
    bHasLock = false;
    bUnlocked = true; // Assume the door is initially unlocked

    // Create a dynamic material instance for the Static Mesh Component
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    if (MeshComponent && MeshComponent->GetStaticMesh())
    {
        DynamicMaterial = UMaterialInstanceDynamic::Create(MeshComponent->GetMaterial(0), this);
        MeshComponent->SetMaterial(0, DynamicMaterial);
    }
}

void ADoor::glow()
{
    // Ändere den Gloweffekt für die Tür (zum Beispiel Änderung des Materials oder Helligkeit)
    if (DynamicMaterial)
    {
        // Hier kannst du die Eigenschaften des Materials ändern
        DynamicMaterial->SetScalarParameterValue(TEXT("GlowIntensity"), 1.0f);
    }
}

void ADoor::switch_state()
{
    // Ändere den Zustand der Tür zwischen offen und zu
    bOpen = !bOpen;

    // Wenn die Tür verriegelt ist, setze den Zustand auf zu, es sei denn, sie ist entsperrt
    if (bHasLock && !bUnlocked)
    {
        bOpen = false;
    }
}

void ADoor::inform_level(int32 Level)
{
    // Bei der Tür passiert nichts in Bezug auf den Level, diese Methode ist hier leer
}
