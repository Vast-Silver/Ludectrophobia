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
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent*   DoorMesh;

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

protected:
    /**
     * @brief Called when the game starts or when spawned. Sets initial rotation values for the door.
     */
    virtual void BeginPlay() override;
    
private:
    /** Door rotation when open */
    FRotator    openRotation;

    /** Door rotation when closed */
    FRotator    closedRotation;

    /** Angle to rotate the door for opening */
    float       door_open_rotation = 90.0f;

    /** Speed at which the door opens or closes */
    float       door_speed = 2.0f;          // Geschwindigkeit, mit der sich die Tür öffnet/schließt
};

