#include "Lever.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

ALever::ALever()
{
  PrimaryActorTick.bCanEverTick = true;

  // Initialize default values
  bActive = false;
  TargetIndex = 0;
}

void ALever::glow()
{
  // Implementiere hier den Gloweffekt für den Hebel
}

void ALever::switch_state()
{
  // Ändere den Zustand des Hebels zwischen aktiv und inaktiv
  bActive = !bActive;
}

void ALever::inform_level(int32 Level)
{
  // Kommuniziere mit der Level-Klasse und entscheide, bei welcher Tür switch_state angewendet werden soll

  // Hole das aktuelle Level-Skript
  ALevelScriptActor* LevelScript = GetWorld()->GetLevelScriptActor();

  // Überprüfe, ob es eine gültige Instanz ist
  if (LevelScript)
  {
    // Hier kannst du die Logik implementieren, um die entsprechende Tür zu finden und den Zustand zu wechseln
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
