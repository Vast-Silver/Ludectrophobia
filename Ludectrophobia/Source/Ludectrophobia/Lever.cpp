// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"

#include "Lever.h"

// Sets default values
ALever::ALever()
{
    // Set this actor to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;

    // Initialisieren Sie die Mesh-Komponenten
    MeshUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshUp"));
    MeshDown = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshDown"));

    // Stellen Sie sicher, dass MeshDown zu Beginn unsichtbar/ausgeschaltet ist
    MeshDown->SetVisibility(false);
    MeshDown->SetHiddenInGame(true);

    // Initialisieren der Variablen
    Active = false;
    TargetIndex = -1;
}

void ALever::BeginPlay()
{
}

void ALever::Tick(float DeltaTime)
{
}

void ALever::glow()
{
    // Implementieren Sie hier die Logik, um den Hebel zum Leuchten zu bringen
}

bool ALever::switch_state()
{
    // Wechseln Sie den Zustand des Hebels und aktualisieren Sie die Mesh-Komponenten
    Active = !Active;
    MeshUp->SetVisibility(!Active);
    MeshUp->SetHiddenInGame(Active);
    MeshDown->SetVisibility(Active);
    MeshDown->SetHiddenInGame(!Active);

    // Implementieren Sie hier zus�tzliche Logik, die ausgef�hrt werden soll, wenn der Hebel umgelegt wird
    // ...

    return Active;
}

void ALever::SetActive(bool NewActive)
{
    Active = NewActive;
    // Hier k�nnen Sie zus�tzliche Logik hinzuf�gen, die ausgel�st wird, wenn Active ge�ndert wird.
}

void ALever::SetTargetIndex(int32 NewTargetIndex)
{
    TargetIndex = NewTargetIndex;
    // Hier k�nnen Sie zus�tzliche Logik hinzuf�gen, die ausgel�st wird, wenn TargetIndex ge�ndert wird.
}
