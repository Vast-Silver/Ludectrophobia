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
    DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorMesh"));
    LockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LockMesh"));
    LockMesh->SetupAttachment(DoorMesh); // Attach the lock to the door

    /** Set DoorMesh as the root component */
    RootComponent = DoorMesh;

    /** Initialize variables */
    is_open = false;
    is_unlocked = true;
}

void ADoor::BeginPlay()
{
    Super::BeginPlay();

    // Set initial visibility of the lock mesh based on is_unlocked
    LockMesh->SetVisibility(!is_unlocked);
}

void ADoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update lock visibility based on is_unlocked
    if (LockMesh->IsVisible() && is_unlocked)
    {
        LockMesh->SetVisibility(false);
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

void ADoor::PlayDoorAnimation()
{
    if (DoorAnimation != nullptr && DoorMesh != nullptr) {
        DoorMesh->PlayAnimation(DoorAnimation, false);
    }
}
