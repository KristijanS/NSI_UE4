// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
public:
	// set default vlaues 
	ABatteryPickup();
	
	// override the WasCollected function - use Implementation because it's blueprint native
	void WasCollected_Implementation() override;

	// Get the power of the battery pickup
	float GetPower();

protected:
	// set the amount of power the battery gives the character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;
};
