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

#include "Door.h"
#include "Components/BoxComponent.h"

ADoor::ADoor()
{
    // Aktiviere Tick-Methode für diese Klasse
    PrimaryActorTick.bCanEverTick = true;

    // Initialisiere die Mesh-Komponente
    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorRahmenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorRahmenMesh"));
    RootComponent = DoorRahmenMesh;
    DoorMesh->AttachToComponent(DoorRahmenMesh, FAttachmentTransformRules::KeepRelativeTransform);


    // Initialisiere Variablen
    is_open = false;
    is_unlocked = false;
}

void ADoor::BeginPlay()
{
    Super::BeginPlay();

    // Initialisiere die Rotationswerte
    ClosedRotation = GetActorRotation();
    OpenRotation = ClosedRotation + FRotator(0.0f, DoorOpenAngle, 0.0f);

}

void ADoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Überprüfe Türöffnungszustand und passe Rotation an
    if (is_open && GetActorRotation().Yaw < OpenRotation.Yaw)
    {
        switch_state();
    }
}



bool ADoor::switch_state()
{
    if (is_unlocked) 
    {
        DoorMesh->SetRelativeRotation(FMath::Lerp(GetActorRotation(), OpenRotation, DoorSpeed * GetWorld()->GetDeltaSeconds()));
        is_open = true;
        return true;
    }
    return false;
}
