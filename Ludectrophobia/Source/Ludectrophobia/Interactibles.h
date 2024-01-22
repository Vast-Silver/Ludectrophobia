/*
 * Copyright (c) 2024 Melih Kaan Yazan. All rights reserved.
 *
 * This work, including all source code files and accompanying documentation (the "Work"), is the property of Melih Kaan Yazan.
 * No part of this Work may be reproduced, distributed, transmitted, sublicensed, stored in a retrieval system, or otherwise used in any form or by any means,
 * without the express written permission of Melih Kaan Yazan, except where permitted by applicable copyright and related rights legislation.
 *
 * The Work is provided in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the license for the specific language governing rights and limitations.
 */

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

public:
	virtual void glow() = 0;
	virtual bool switchState() = 0;
};
