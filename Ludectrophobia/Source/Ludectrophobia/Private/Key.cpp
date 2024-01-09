#include "Key.h"
#include "Door_Actor_Temp.h" // Ersetze "YourDoorClass" durch den tatsächlichen Namen deiner Door-Klasse

AKey::AKey()
{
    // Hier können Initialisierungen für die Key-Klasse durchgeführt werden
}

void AKey::grab()
{
    //Setze das Objekt auf sichtbar und deaktiviere die Kollision
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);
}

void AKey::drop()
{
    //Setze das Objekt auf sichtbar und aktiviere die Kollision
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
}

void AKey::use()
{
    //Lasse das Objekt verschwinden und beeinflusse den unlocked-Zustand der Tür
    SetActorHiddenInGame(true);

    //Der Türzustand soll beeinflusst werden, wenn eine Tür vorhanden ist
    ADoor_Actor_Temp* YourDoor = Cast<ADoor_Actor_Temp>(GetWorld()->GetFirstPlayerController()->GetLevelScriptActor());
    if (YourDoor)
    {
        YourDoor->SetDoorUnlocked(true);
    }
}
