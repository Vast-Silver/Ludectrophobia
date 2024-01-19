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
#include "Lever.generated.h"

UCLASS()
class LUDECTROPHOBIA_API ALever : public AActor, public IInteractibles
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ALever();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Implementiert die Interface-Funktionen
    UFUNCTION(BlueprintCallable, Category = "Lever")
    virtual void glow() override;
    UFUNCTION(BlueprintCallable, Category = "Lever")
    virtual bool switch_state() override;

    // Mesh-Komponenten für die Zustände "oben" und "unten"
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    UStaticMeshComponent* MeshUp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    UStaticMeshComponent* MeshDown;

    // Variable, um den aktiven Zustand des Hebels zu speichern
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lever")
    bool Active;

    // Variable, um das Zielindex zu speichern (z.B. welche Tür dieser Hebel steuert)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lever")
    int32 TargetIndex;

    // Funktionen, um die Werte von Active und TargetIndex auch zur Laufzeit zu ändern
    UFUNCTION(BlueprintCallable, Category = "Lever")
    void SetActive(bool NewActive);

    UFUNCTION(BlueprintCallable, Category = "Lever")
    void SetTargetIndex(int32 NewTargetIndex);
};
