﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HitInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UHitInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class Q_API IHitInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void GetHit(const FVector& ImpactPoint, AActor* Hitter);
};
