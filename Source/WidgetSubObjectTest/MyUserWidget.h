// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETSUBOBJECTTEST_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    UMyUserWidget(const FObjectInitializer &);
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Test")
    class UMyObject* TestObjects;
	
};
