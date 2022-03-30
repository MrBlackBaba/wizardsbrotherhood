// Fill out your copyright notice in the Description page of Project Settings.


#include "WBHPlayer.h"

// Sets default values
AWBHPlayer::AWBHPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWBHPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWBHPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWBHPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

