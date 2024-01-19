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

UCLASS()
class LUDECTROPHOBIA_API ADoor : public AActor
{
    GENERATED_BODY()

public:
    // Konstruktor
    ADoor();

    // Tick-Methode
    virtual void Tick(float DeltaTime) override;

protected:
    // BeginPlay-Methode
    virtual void BeginPlay() override;


public:
    // Mesh-Komponente f�r die Darstellung der T�r
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* DoorMesh;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* DoorRahmenMesh;

    // T�r-Statusvariablen
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool is_open;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool is_unlocked;

    // Funktionen f�r T�r-Interaktion
    bool switch_state();

protected:
    
private:
    FRotator OpenRotation;
    FRotator ClosedRotation;
    float DoorOpenAngle = 90.0f; // Winkel, um den sich die T�r �ffnen soll
    float DoorSpeed = 2.0f; // Geschwindigkeit, mit der sich die T�r �ffnet/schlie�t
};

