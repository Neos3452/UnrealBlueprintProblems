// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetSubObjectTest.h"
#include "MyUserWidget.h"

#include "MyObject.h"

UMyUserWidget::UMyUserWidget(const FObjectInitializer &ObjInit)
    : Super(ObjInit)
{
    TestObjects = ObjInit.CreateDefaultSubobject<UMyObject>(this, "Dupaaaa");
    UE_LOG(LogTemp, Warning, TEXT("ctr"));
}

