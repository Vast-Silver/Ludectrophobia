// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Door.h"
#include "DoorKey.generated.h"

/**
 * @brief ADoorKey Class - Manages the behavior and state of key actors in the game.
 */
UCLASS()
class LUDECTROPHOBIA_API ADoorKey : public AActor
{
    GENERATED_BODY()

public:
    // Constructs the ADoorKey object and initializes default values.
    ADoorKey();

    /**
     * @brief Function to simulate picking up the key. Hides the key mesh and sets picked_key to true.
     */
    UFUNCTION(BlueprintCallable)
    void grab();

    /**
     * @brief Function to simulate using the key. Sets used_key to true.
     */
    UFUNCTION(BlueprintCallable)
    void use(ADoor* door);

    /** Mesh component representing the key */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* KeyMesh;

    // Getters and setters for picked_key
    UFUNCTION(BlueprintCallable)
    bool getPickedKey() const;

    UFUNCTION(BlueprintCallable)
    void setPickedKey(bool state);

    // Getters and setters for used_key
    UFUNCTION(BlueprintCallable)
    bool getUsedKey() const;

    UFUNCTION(BlueprintCallable)
    void setUsedKey(bool state);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

private:
    // True if the key has been picked up
    bool picked_key;

    // True if the key has been used
    bool used_key;
};