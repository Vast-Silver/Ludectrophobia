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

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactibles.h"
#include "Door.generated.h"

UCLASS()
class LUDECTROPHOBIA_API ADoor : public AActor, public IInteractibles
{
    GENERATED_BODY()

private:
    bool has_lock;
    bool is_open;
    bool is_unlocked;
    int32 door_index; // Unique index for each door if needed

public:
    // Sets default values for this actor's properties
    ADoor();

    virtual void glow() override;
    virtual bool switch_state() override;

    bool get_has_lock() const;
    void set_has_lock(bool NewState);

    bool get_is_open() const;
    void set_is_open(bool NewState);

    bool get_is_unlocked() const;
    void set_is_unlocked(bool NewState);

    int32 get_door_index() const;
    void set_door_index(int32 NewIndex);
};