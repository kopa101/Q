﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Q/Items/Treasure.h"
#include "Q/Interfaces/PickupInterface.h"
#include "Components/SphereComponent.h"

void ATreasure::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IPickupInterface* PickupInterface = Cast<IPickupInterface>(OtherActor);
	if (PickupInterface)
	{
		PickupInterface->AddGold(this);

		SpawnPickupSound();
		Destroy();
	}
}