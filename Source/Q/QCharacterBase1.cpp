﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "QCharacterBase1.h"


// Sets default values
AQCharacterBase1::AQCharacterBase1()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AQCharacterBase1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQCharacterBase1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AQCharacterBase1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

