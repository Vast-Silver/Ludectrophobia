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

 /**
  * @brief Constructor for ALever. Initializes the lever's properties and components.
  */
ALever::ALever()
{
    /** Set this actor to call Tick() every frame. */
    PrimaryActorTick.bCanEverTick = true;

    /** Initialize the mesh components */
    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeverMesh"));

    /** Initialisieren der Variablen */
    active = false;
}

void ALever::glow()
{
    // Implement glow effect
}

bool ALever::switchState()
{
    if (door != nullptr)
    {
        if (!active) {
               
            /** Play the lever animation */
            if (door->isUnlocked()) {
                PlayLeverAnimation();
                active = !active;
                door->switchState();
            }
            
        }
    }
    return active;
}

void ALever::PlayLeverAnimation()
{
    if (LeverAnimation != nullptr && SkeletalMesh != nullptr) {
        SkeletalMesh->PlayAnimation(LeverAnimation, false);
    }
}