// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MainDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class LIFEISGENETIC_API UMainDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Global")
		float DayInSec;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Global")
		bool ShowDebugOnScreen;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Global")
		FVector WorldPosition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		int IndividualsMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float ChanceOfEvent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float ChanceOfRain;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poop")
		float AutoGrowTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poop")
		TArray<int> WaterPerSteps;
};
