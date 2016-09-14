// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#include "UnrealRPGPrivatePCH.h"
#include "ItemActorBase.h"


// Sets default values
AItemActorBase::AItemActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AItemActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemActorBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

