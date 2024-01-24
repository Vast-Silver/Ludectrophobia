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
    is_unlocked = false;
}

void ADoor::BeginPlay()
{
    Super::BeginPlay();

    // Set initial visibility of the lock mesh based on is_unlocked
    LockMesh->SetVisibility(!is_unlocked);
}

// Tick is called every frame. If ticking is enabled for this class, this method will process any frame-based logic.
void ADoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


// switchState attempts to toggle the open/closed state of the door. It checks if the door is unlocked before toggling.
// If the door is unlocked, it toggles the is_open state and plays the door animation.
// Returns true if the door state was successfully toggled, false if the door is locked.

bool ADoor::switchState()
{
    if (is_unlocked)
    {
        /** Toggle door state */
        is_open = !is_open;
        PlayDoorAnimation();
        return true;
    }
    return false;
}

// unlock sets the door to be unlocked and makes the lock mesh (if any) invisible.
// This allows the door to be interacted with (e.g., opened).
void ADoor::unlock()
{
    ADoor::is_unlocked = true;
    if (LockMesh != nullptr) {
        LockMesh->SetVisibility(false);
    }
}

// isUnlocked returns the current unlock state of the door (true if unlocked, false if locked).
bool ADoor::isUnlocked()
{
    return is_unlocked;
}


// PlayDoorAnimation plays the assigned animation for the door, if both the animation and the door mesh are valid.
void ADoor::PlayDoorAnimation()
{
    if (DoorAnimation != nullptr && DoorMesh != nullptr) {
        DoorMesh->PlayAnimation(DoorAnimation, false);
    }
}
