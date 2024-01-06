// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactibles.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractibles : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class LUDECTROPHOBIA_API IInteractibles
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

  //Preparation
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void OnInteract(AActor* Caller);

  //methods for door and lever
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void glow();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void switch_state();
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void inform_level();
};
