// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"

// Sets default values
ALever::ALever()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALever::glow()
{
}

void ALever::switch_state()
{
}

void ALever::inform_level()
{
}

int ALever::get_target_index()
{
  return 0;
}

bool ALever::get_active()
{
  return false;
}

bool ALever::active()
{
  return false;
}

int ALever::target_index()
{
  return 0;
}

