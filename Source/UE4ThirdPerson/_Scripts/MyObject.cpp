// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	sampleFloat = 0;
}

void UMyObject::MemberFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("This is our warning Text!"));
}


