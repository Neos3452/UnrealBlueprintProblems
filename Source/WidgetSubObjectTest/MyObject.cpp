// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetSubObjectTest.h"
#include "MyObject.h"


UMyObject::UMyObject(const FObjectInitializer &ObjInit)
    : Super(ObjInit)
{
    SomeValue = 20.f;
    UE_LOG(LogTemp, Warning, TEXT("ctr2"));
}

void UMyObject::LogSomeValue()
{
    SomeValue += 1.f;
    UE_LOG(LogTemp, Warning, TEXT("SomeValue: %f"), SomeValue);
}

