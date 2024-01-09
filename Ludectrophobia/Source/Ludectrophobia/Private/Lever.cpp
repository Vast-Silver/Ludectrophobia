#include "Lever.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

ALever::ALever()
{
  PrimaryActorTick.bCanEverTick = true;
  bActive = false;
  TargetIndex = 0;
}

void ALever::glow()
{
}

void ALever::switch_state()
{
  bActive = !bActive;
}

void ALever::inform_level(int32 Level)
{
  // Hole das aktuelle Level-Skript
  ALevelScriptActor* LevelScript = GetWorld()->GetLevelScriptActor();

  // Überprüfe, ob es eine gültige Instanz ist
  if (LevelScript)
  {
    int32 DoorTargetIndex = get_target_index();
    LevelScript->SwitchDoorState(DoorTargetIndex);
  }
}

int32 ALever::get_target_index() const
{
  return TargetIndex;
}

bool ALever::get_active() const
{
  return bActive;
}
