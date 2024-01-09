// Key.cpp
#include "Key.h"
#include "Door_Actor_Temp.h"

AKey::AKey()
{
}

void AKey::grab()
{
  SetActorHiddenInGame(true);
  SetActorEnableCollision(false);
}

void AKey::drop()
{
  SetActorHiddenInGame(false);
  SetActorEnableCollision(true);
}

void AKey::use()
{
  SetActorHiddenInGame(true);

  ADoor_Actor_Temp* YourDoor = Cast<ADoor_Actor_Temp>(GetWorld()->GetFirstPlayerController()->GetLevelScriptActor());
  if (YourDoor)
  {
    YourDoor->SetDoorUnlocked(true);
  }
}
