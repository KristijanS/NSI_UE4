// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickup.h"

//set Default values 
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// default power level of the battery
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	//Use the base pickup behavior
	Super::WasCollected_Implementation();
	//destroy the battery
	Destroy();
}

// report the power level of the battery
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}