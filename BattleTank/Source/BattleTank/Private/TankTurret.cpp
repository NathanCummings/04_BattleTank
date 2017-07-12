// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "GameFramework/Actor.h"

void UTankTurret::Turn(float RelativeSpeed)
{
	auto NewRelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1., 1.);
	auto AngleChange = NewRelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto NewAngle = RelativeRotation.Yaw + AngleChange;
	
	SetRelativeRotation(FRotator(0, NewAngle, 0));
}


