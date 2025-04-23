// Copyright Epic Games, Inc. All Rights Reserved.

#include "PA9PickUpComponent.h"

UPA9PickUpComponent::UPA9PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UPA9PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UPA9PickUpComponent::OnSphereBeginOverlap);
}

void UPA9PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	APA9Character* Character = Cast<APA9Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
