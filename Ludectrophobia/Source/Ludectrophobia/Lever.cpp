/*
 * Copyright (c) 2024 Melih Kaan Yazan. All rights reserved.
 *
 * This work, including all source code files and accompanying documentation (the "Work"), is the property of Melih Kaan Yazan.
 * No part of this Work may be reproduced, distributed, transmitted, sublicensed, stored in a retrieval system, or otherwise used in any form or by any means,
 * without the express written permission of Melih Kaan Yazan, except where permitted by applicable copyright and related rights legislation.
 *
 * The Work is provided in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the license for the specific language governing rights and limitations.
 */

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
}

void ALever::BeginPlay()
{
}

void ALever::Tick(float DeltaTime)
{
}

void ALever::glow()
{
    
}

bool ALever::SetActiveDoor()
{
    if (door != nullptr) {
        door->switch_state();
        Active = !Active;
        MeshUp->SetVisibility(!Active);
        MeshUp->SetHiddenInGame(Active);
        MeshDown->SetVisibility(Active);
        MeshDown->SetHiddenInGame(!Active);
    }
    return Active;
}


