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
        KeyMesh->SetVisibility(false);

        // Set picked_key to true
        picked_key = true;
    }
}

void ADoorKey::use()
{
    if (picked_key && !used_key)
    {
        // Set used_key to true
        used_key = true;
    }
}

bool ADoorKey::getPickedKey() const
{
    return picked_key;
}

void ADoorKey::setPickedKey(bool state)
{
    picked_key = state;
    KeyMesh->SetVisibility(!state);
}

bool ADoorKey::getUsedKey() const
{
    return used_key;
}

void ADoorKey::setUsedKey(bool state)
{
    used_key = state;
}