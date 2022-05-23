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

	// GenerationManager

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		int IndividualsMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		float DamageSpeedNumerator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		float NavmeshRadiusToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		float LegsLengthMutationRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		float ThickSkinMutationRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GenerationManager")
		float SharpedTeethMutationRatio;

	// Individual

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual")
		float DisplacementSpeedFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual")
		float SpawnCorpseRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual")
		float BulletDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual")
		float FruitHeal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float DefensePlusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float DefenseMinusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		int DefenseMinusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		int DefenseMinusClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float AttackPlusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float AttackMinusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		int AttackMinusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		int AttackMinusClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float SpeedPlusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float SpeedPlusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float SpeedPlusClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float SpeedMinusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float SpeedMinusClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float PoopPlusFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float PoopPlusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float PoopPlusClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float PoopMinusClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Individual > Genes")
		float PoopMinusClampMax;

	// WeatherManager

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float ChanceOfEvent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float ChanceOfRain;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float NotificationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float TimeBetweenEventsMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float TimeBetweenEventsMax;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float TimeBetweenRainsMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeatherManager")
		float TimeBetweenRainsMax;

	// Poop

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poop")
		float AutoGrowTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poop")
		TArray<int> WaterPerSteps;
};
