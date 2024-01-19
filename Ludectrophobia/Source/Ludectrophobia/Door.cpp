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

ADoor::ADoor()
{
    // Set default values
    has_lock = false;
    is_open = false;
    is_unlocked = false;
    door_index = -1;
}


void ADoor::glow()
{
    //if (DoorMeshComponent)
    //{
        //DoorMeshComponent->SetMaterial(0, GlowingMaterial);
    //}
}

bool ADoor::switch_state()
{
    is_open = !is_open; // Schalte den Zustand um

    if (is_open)
    {
        // Logik zum  ffnen der T r, z.B. Rotation  ndern oder eine  ffnungsanimation abspielen
        //DoorMeshComponent->SetRelativeRotation(FRotator(0.f, OpenAngle, 0.f));
    }
    else
    {
        // Logik zum Schlie en der T r, z.B. Rotation zur cksetzen oder eine Schlie animation abspielen
        //DoorMeshComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
    }
    return is_open;
}

bool ADoor::get_has_lock() const
{
    return has_lock;
}

void ADoor::set_has_lock(bool bHasLock)
{
    has_lock = bHasLock;
}

bool ADoor::get_is_open() const
{
    return is_open;
}

void ADoor::set_is_open(bool bHereIsOpen)
{
    is_open = bHereIsOpen;
}

bool ADoor::get_is_unlocked() const
{
    return is_unlocked;
}

void ADoor::set_is_unlocked(bool bHereIsUnlocked)
{
    is_unlocked = bHereIsUnlocked;
}

int32 ADoor::get_door_index() const
{
    return door_index;
}

void ADoor::set_door_index(int32 DoorIndex)
{
    door_index = DoorIndex;
}