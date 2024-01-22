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
    /** Enable Tick method for this class */
    PrimaryActorTick.bCanEverTick = true;

    /** Initialize the mesh component */
    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));

    /** Set DoorMesh as the root component */
    RootComponent = DoorMesh;

    /** Initialize variables */
    is_open = false;
    is_unlocked = true;
}

void ADoor::BeginPlay()
{
    Super::BeginPlay();

    /** Initialize rotation values */
    closedRotation = GetActorRotation();
    openRotation = closedRotation + FRotator(0.0f, door_open_rotation, 0.0f);
}

void ADoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    /** Door opening logic */
    if (is_open && GetActorRotation().Yaw < openRotation.Yaw)
    {
        FRotator CurrentRotation = FMath::Lerp(GetActorRotation(), openRotation, door_speed * DeltaTime);
        DoorMesh->SetWorldRotation(CurrentRotation);
    }
    /** Door closing logic */
    else if (!is_open && GetActorRotation().Yaw > closedRotation.Yaw)
    {
        FRotator CurrentRotation = FMath::Lerp(GetActorRotation(), closedRotation, door_speed * DeltaTime);
        DoorMesh->SetWorldRotation(CurrentRotation);
    }
}



bool ADoor::switchState()
{
    if (is_unlocked)
    {
        /** Toggle door state */
        is_open = !is_open;
        return true;
    }
    return false;
}
