// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_Actor_Temp.generated.h"
#include "Interactibles.h"

UCLASS()
class LUDECTROPHOBIA_API ADoor_Actor_Temp : public AActor, public IInteractibles
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor_Actor_Temp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  //methods for door and lever
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void glow();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void switch_state();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void inform_level();

private:
  //door state open or closed
  bool open;

  //lock state with lock or without lock
  bool has_lock;

  //door lock unlocked or locked
  bool unlocked;
};
