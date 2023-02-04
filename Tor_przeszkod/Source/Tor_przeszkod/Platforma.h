// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Platforma.generated.h"

UCLASS()
class TOR_PRZESZKOD_API APlatforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:

	UPROPERTY(EditAnywhere, Category="Ruch")
	FVector szybkosc = FVector(100, 0 , 0);

	FVector startowa;

	UPROPERTY(EditAnywhere, Category="Ruch")
	float max_odleglosc = 100;
	UPROPERTY(EditAnywhere, Category="Rotacja")
	FRotator szybkosc_obracania;

	void ruchoma_platforma(float DeltaTime);
	void obracana_platforma(float DeltaTime);
	bool CzyJestZmianaKierunku() const;
	float JakaOdleglosc() const;


	
	

};
