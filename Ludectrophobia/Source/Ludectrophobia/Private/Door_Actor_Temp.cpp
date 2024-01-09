// Fill out your copyright notice in the Description page of Project Settings.


#include "Door_Actor_Temp.h"

// Sets default values
ADoor_Actor_Temp::ADoor_Actor_Temp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor_Actor_Temp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor_Actor_Temp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
  
}

void ADoor_Actor_Temp::glow()
{
}

void ADoor_Actor_Temp::switch_state()
{
}

void ADoor_Actor_Temp::inform_level()
{
}

