// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD/SimplerBaseWidget.h"



void USimplerBaseWidget::SetBase(USimplerActivatableWidget* Base)
{
	bool HadToRemoveWidget = false;
	_baseWidgetToActivate = Base;
	
	if(BasePanel->GetAllChildren().Num() > 0)
		if (UWidget* Child = BasePanel->GetAllChildren()[0])
		{
			if(USimplerActivatableWidget* SimplerWidget = Cast<USimplerActivatableWidget>(Child))
			{
				if(SimplerWidget->DeactivationAnim)
				{
					FWidgetAnimationDynamicEvent RemoveEvent;
					RemoveEvent.BindUFunction(this, FName("RemoveWidgetFromBase"));
					SimplerWidget->BindToAnimationFinished(SimplerWidget->DeactivationAnim, RemoveEvent);
					SimplerWidget->PlayAnimation(SimplerWidget->DeactivationAnim);
				}
				else
				{
					RemoveBase();
				}
			}
			HadToRemoveWidget = true;
		}

	if(!HadToRemoveWidget)
	{
		Base->PlayAnimation(Base->ActivationAnim);
	}

	BasePanel->AddChild(Base);
}

void USimplerBaseWidget::SetPrompt(USimplerActivatableWidget* Prompt)
{
	bool HadToRemoveWidget = false;
	_promptWidgetToActivate = Prompt;
	
	if(PromptPanel->GetAllChildren().Num() > 0)
		if (UWidget* Child = PromptPanel->GetAllChildren()[0])
		{
			if(USimplerActivatableWidget* SimplerWidget = Cast<USimplerActivatableWidget>(Child))
			{
				if(SimplerWidget->DeactivationAnim)
				{
					FWidgetAnimationDynamicEvent RemoveEvent;
					RemoveEvent.BindUFunction(this, FName("RemoveWidgetFromBase"));
					SimplerWidget->BindToAnimationFinished(SimplerWidget->DeactivationAnim, RemoveEvent);
					SimplerWidget->PlayAnimation(SimplerWidget->DeactivationAnim);
				}
				else
				{
					RemovePrompt();
				}
			}
			HadToRemoveWidget = true;
		}

	if(!HadToRemoveWidget)
	{
		Prompt->PlayAnimation(Prompt->ActivationAnim);
	}

	PromptPanel->AddChild(Prompt);
	_baseWidgetToActivate->PlayAnimation(_baseWidgetToActivate->ActivationAnim);
}

void USimplerBaseWidget::RemoveBase()
{
	BasePanel->RemoveChildAt(0);
}

void USimplerBaseWidget::RemovePrompt()
{
	PromptPanel->RemoveChildAt(0);
}
