// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lever.generated.h"
#include "Interactibles.h"

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

  //methods for door and lever
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void glow();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void switch_state();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void inform_level();

  int get_target_index();

  bool get_active();

private:

  bool active();

  int target_index();

};
