#include "Key.h"
#include "Door_Actor_Temp.h" // Ersetze "YourDoorClass" durch den tats�chlichen Namen deiner Door-Klasse

AKey::AKey()
{
    // Hier k�nnen Initialisierungen f�r die Key-Klasse durchgef�hrt werden
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
    //Lasse das Objekt verschwinden und beeinflusse den unlocked-Zustand der T�r
    SetActorHiddenInGame(true);

    //Der T�rzustand soll beeinflusst werden, wenn eine T�r vorhanden ist
    ADoor_Actor_Temp* YourDoor = Cast<ADoor_Actor_Temp>(GetWorld()->GetFirstPlayerController()->GetLevelScriptActor());
    if (YourDoor)
    {
        YourDoor->SetDoorUnlocked(true);
    }
}
