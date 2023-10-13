// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimplerActivatableWidget.h"
#include "SimplerBaseWidget.h"
#include "Engine/Classes/GameFramework/HUD.h"
#include "HUDSimplerUI.generated.h"

UCLASS(Abstract)
class SIMPLERUI_API AHUDSimplerUI : public AHUD
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="SimplerUI | HUD")
	USimplerActivatableWidget* PushBase(TSubclassOf<USimplerActivatableWidget> WidgetToAdd);

	UFUNCTION(BlueprintCallable, Category="SimplerUI | HUD")
	USimplerActivatableWidget* PushPrompt(TSubclassOf<USimplerActivatableWidget> WidgetToAdd);

	UFUNCTION(BlueprintCallable, Category="SimplerUI | HUD")
	USimplerActivatableWidget* PopPrompt();

	UFUNCTION(BlueprintCallable, Category="SimplerUI | HUD")
	USimplerActivatableWidget* PopBase();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Simpler")
	TSubclassOf<USimplerBaseWidget> BaseWidget;
	
	UPROPERTY(BlueprintReadOnly, Category="Simpler")
	TArray<USimplerActivatableWidget*> BaseStack;

	UPROPERTY(BlueprintReadOnly, Category="Simpler")
	TArray<USimplerActivatableWidget*> PromptStack;

private:
	UPROPERTY()
	USimplerBaseWidget* _baseWidget;
};
