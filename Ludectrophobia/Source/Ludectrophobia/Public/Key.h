#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "Key.generated.h"

UCLASS()
class LUDECTROPHOBIA_API AKey : public AActor, public IItem
{
	GENERATED_BODY()

public:
	// Implementierung der IItem-Methoden
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	virtual void grab();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	virtual void drop();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	virtual void use();
};
