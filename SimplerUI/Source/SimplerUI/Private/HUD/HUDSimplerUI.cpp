// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/HUDSimplerUI.h"



void AHUDSimplerUI::BeginPlay()
{
	_baseWidget = CreateWidget<USimplerBaseWidget>(GetOwningPlayerController(), BaseWidget, TEXT("BaseWidget"));
	_baseWidget->AddToPlayerScreen();
	Super::BeginPlay();
}


USimplerActivatableWidget* AHUDSimplerUI::PushBase(TSubclassOf<USimplerActivatableWidget> WidgetToAdd)
{
	auto* NewWidget = CreateWidget<USimplerActivatableWidget>(GetOwningPlayerController(), WidgetToAdd);
	BaseStack.Add(NewWidget);
	_baseWidget->SetBase(NewWidget);
	return NewWidget;
}

USimplerActivatableWidget* AHUDSimplerUI::PushPrompt(TSubclassOf<USimplerActivatableWidget> WidgetToAdd)
{
	auto* NewWidget = CreateWidget<USimplerActivatableWidget>(GetOwningPlayerController(), WidgetToAdd);
	PromptStack.Add(NewWidget);
	_baseWidget->SetPrompt(NewWidget);
	return NewWidget;
}

USimplerActivatableWidget* AHUDSimplerUI::PopPrompt()
{
	_baseWidget->RemovePrompt();
	return PromptStack.Pop();
}

USimplerActivatableWidget* AHUDSimplerUI::PopBase()
{
	_baseWidget->RemoveBase();
	return  BaseStack.Pop();
}


