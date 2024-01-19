// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorComponent.h"

// Sets default values for this component's properties
UDoorComponent::UDoorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDoorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
UDoorComponent::UDoorComponent()
{
    // Set default values
    has_lock = false;
    is_open = false;
    is_unlocked = false;
    door_index = -1;
}


void UDoorComponent::glow()
{
    //if (DoorMeshComponent)
    //{
        //DoorMeshComponent->SetMaterial(0, GlowingMaterial);
    //}
}

bool UDoorComponent::switch_state()
{
    is_open = !is_open; // Schalte den Zustand um
    return is_open;
}

bool UDoorComponent::get_has_lock() const
{
    return has_lock;
}

void UDoorComponent::set_has_lock(bool has_lock)
{
    this->has_lock = has_lock;
}

bool UDoorComponent::get_is_open() const
{
    return is_open;
}

void UDoorComponent::set_is_open(bool is_open)
{
    this->is_open = is_open;
}

bool UDoorComponent::get_is_unlocked() const
{
    return is_unlocked;
}

void UDoorComponent::set_is_unlocked(bool is_unlocked)
{
    this->is_unlocked = is_unlocked;
}

int32 UDoorComponent::get_door_index() const
{
    return door_index;
}

void UDoorComponent::set_door_index(int32 door_index)
{
    this->door_index = door_index;
}
