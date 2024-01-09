// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Key.generated.h"
#include "Item.h"

UCLASS()
class LUDECTROPHOBIA_API AKey : public AActor, public IItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKey();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  std::vector<int> get_target_index();

private:
  vector<int> taget_index;
};
