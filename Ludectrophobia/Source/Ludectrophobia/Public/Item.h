#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Item.generated.h"

UINTERFACE(MinimalAPI)
class UItem : public UInterface
{
	GENERATED_BODY()
};

class LUDECTROPHOBIA_API IItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void grab();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void drop();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
	void use();
};
