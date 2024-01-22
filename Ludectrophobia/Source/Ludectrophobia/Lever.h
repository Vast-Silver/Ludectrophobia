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
#include "Door.h"
#include "Lever.generated.h"


 /**
  * @brief ALever Class - Manages the behavior and state of lever actors in the game.
  */
UCLASS()
class LUDECTROPHOBIA_API ALever : public AActor
{
    GENERATED_BODY()

public:
    /**
     * @brief Constructs the ALever object and initializes default values.
     */
    ALever();

    /** Door object that this lever is associated with. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
    ADoor* door;

    /**
     * @brief Implements glow effect for the lever (if needed).
     */
    UFUNCTION(BlueprintCallable, Category = "Lever")
    virtual void glow();

    /**
     * @brief Toggles the state of the lever and associated door.
     * @return True if the state was successfully toggled, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "Lever")
    bool switchState();

    /**
     * @brief Plays the animation associated with the lever.
     */
    void PlayLeverAnimation();

    /** Skeletal mesh component representing the lever. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    USkeletalMeshComponent* SkeletalMesh;

    /** Animation sequence to be played when the lever is activated. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
    UAnimSequence* LeverAnimation;

private:
    /** Variable to store the active state of the lever. */
    // Variable, um den aktiven Zustand des Hebels zu speichern
    bool active;
};

