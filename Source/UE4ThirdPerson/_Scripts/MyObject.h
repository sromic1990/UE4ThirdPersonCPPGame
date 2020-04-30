// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE4THIRDPERSON_API UMyObject : public UObject
{
	GENERATED_BODY()

public:
	UMyObject();
	
	UPROPERTY(BlueprintReadWrite, Category = "MyVariables")
	float sampleFloat;

	UFUNCTION(BlueprintCallable, Category = "MyFunctions")
	void MemberFunction();
	
};
