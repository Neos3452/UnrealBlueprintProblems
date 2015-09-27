// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "MyObject.generated.h"

UENUM(BlueprintType)
enum class EMyEnum {
    One,
    Two,
    Three
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnumDelegate, EMyEnum, Value);
/**
 * 
 */
UCLASS()
class WIDGETSUBOBJECTTEST_API UMyObject : public UObject
{
	GENERATED_BODY()
public:
    UMyObject(const FObjectInitializer &);

    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Test")
    float SomeValue;
	
    UFUNCTION(BlueprintCallable, Category="Test")
    void LogSomeValue();
    
    UPROPERTY(BlueprintAssignable, Category = "Test")
    FEnumDelegate EnumDelegate;
	
};
