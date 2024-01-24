// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorKey.h"

// Sets default values
ADoorKey::ADoorKey()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Initialize Mesh Component
    KeyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
    RootComponent = KeyMesh;

    // Initialize state variables
    picked_key = false;
    used_key = false;
}

// Called when the game starts or when spawned
void ADoorKey::BeginPlay()
{
    Super::BeginPlay();
}

void ADoorKey::grab()
{
    if (!picked_key)
    {
        // Hide the key mesh
        KeyMesh->SetHiddenInGame(true);
        KeyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

        // Set picked_key to true
        picked_key = true;
    }
}

/**
*@brief Get the current state indicating whether the key has been picked up.
*
* @return Returns true if the key has been picked up, false otherwise.
*/
bool ADoorKey::getPickedKey() const
{
    return picked_key;
}


/**
 * @brief Set the state indicating whether the key has been picked up.
 *
 * @param state The new state to set for the picked_key flag.
 *
 * This method sets the picked_key flag to the specified state.
 * If the key is set to picked (true), it also destroys the key's mesh component, making the key disappear from the game world.
 */
void ADoorKey::setPickedKey(bool state)
{
    picked_key = state;
    KeyMesh->DestroyComponent();
}


/**
 * @brief Get the current state indicating whether the key has been used.
 *
 * @return Returns true if the key has been used, false otherwise.
 */
bool ADoorKey::getUsedKey() const
{
    return used_key;
}

/**
 * @brief Set the state indicating whether the key has been used.
 *
 * @param state The new state to set for the used_key flag.
 *
 * This method sets the used_key flag to the specified state.
 */
void ADoorKey::setUsedKey(bool state)
{
    used_key = state;
}