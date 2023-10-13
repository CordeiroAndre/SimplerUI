// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"

#include "SimplerActivatableWidget.generated.h"

/**
 *  
 */
UCLASS(Abstract)
class SIMPLERUI_API USimplerActivatableWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient,EditAnywhere, BlueprintReadOnly, meta=(BindWidgetAnimOptional))
	UWidgetAnimation* ActivationAnim;

	UPROPERTY(Transient,BlueprintReadOnly,BlueprintReadOnly, meta=(BindWidgetAnimOptional))
	UWidgetAnimation* DeactivationAnim;


	
};
