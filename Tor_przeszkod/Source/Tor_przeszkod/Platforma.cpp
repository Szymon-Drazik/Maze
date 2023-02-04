// Fill out your copyright notice in the Description page of Project Settings.


#include "Platforma.h"

// Sets default values
APlatforma::APlatforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlatforma::BeginPlay()
{
	Super::BeginPlay();

startowa = GetActorLocation();
	

}

// Called every frame
void APlatforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	ruchoma_platforma(DeltaTime);
	obracana_platforma(DeltaTime);

}

void APlatforma::ruchoma_platforma(float DeltaTime)
{
	if(CzyJestZmianaKierunku())
	{
	FVector kierunek_ruchu = szybkosc.GetSafeNormal();
	startowa = startowa + kierunek_ruchu * max_odleglosc;
	SetActorLocation(startowa);
	szybkosc = -szybkosc;
	}
	else
	{
	FVector lokalny = GetActorLocation();
	lokalny = lokalny + szybkosc * DeltaTime;
	SetActorLocation(lokalny);
	}
}
void APlatforma::obracana_platforma(float DeltaTime)
{
	AddActorLocalRotation(szybkosc_obracania*DeltaTime);
}
bool APlatforma::CzyJestZmianaKierunku() const
{
return JakaOdleglosc() > max_odleglosc;
}

float APlatforma::JakaOdleglosc() const
{
	return FVector::Dist(GetActorLocation(),startowa);
}
