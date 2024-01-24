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
#include "Components/StaticMeshComponent.h"
#include "Door.generated.h"


 /**
  * @brief ADoor Class - Manages the behavior and state of door actors in the game.
  */
UCLASS()
class LUDECTROPHOBIA_API ADoor : public AActor
{
    GENERATED_BODY()

public:
    /**
     * @brief Constructs the ADoor object and initializes default values.
     */
    ADoor();

    /**
     * @brief Called every frame. Manages door opening and closing logic based on door state.
     * @param DeltaTime Time elapsed since last frame.
     */
    virtual void Tick(float DeltaTime) override;

    /** Mesh component representing the door */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    USkeletalMeshComponent*   DoorMesh;
    /** Mesh component representing the door lock */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh")
    UStaticMeshComponent* LockMesh;

    /** Animation sequence to be played when the door is opened. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
    UAnimSequence* DoorAnimation;

    /**
     * @brief Plays the animation associated with the lever.
     */
    void PlayDoorAnimation();

    /** Door state variables */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool        is_open;

    /** True if the Door is unlocked */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool        is_unlocked;

    /**
     * @brief Toggles the state of the door from open to closed or vice versa.
     * @return True if the door state was successfully toggled, false otherwise.
     */
    bool        switchState();

    /**
     * @brief Function to simulate using the key. Sets used_key to true.
     */
    UFUNCTION(BlueprintCallable, Category = "DoorUnlock")
    void        unlock();

    /**
     * @brief Function to return Lock State
     * @return state locked/unlocked
     */
    bool        isUnlocked();

protected:
    /**
     * @brief Called when the game starts or when spawned. Sets initial rotation values for the door.
     */
    virtual void BeginPlay() override;
    
private:
   
};

