﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "RakNetPrivatePCH.h"
#include "NATServer.h"


// Sets default values
ANATServer::ANATServer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANATServer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANATServer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
