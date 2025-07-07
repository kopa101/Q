// Fill out your copyright notice in the Description page of Project Settings.


#include "Q/HUD/QHUD.h"
#include "Q/HUD/QOverlay.h"

void AQHUD::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && QOverlayClass)
		{
			QOverlay = CreateWidget<UQOverlay>(Controller, QOverlayClass);
			QOverlay->AddToViewport();
		}
	}
}