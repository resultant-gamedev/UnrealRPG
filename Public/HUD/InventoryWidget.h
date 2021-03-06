// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
//#include "HumanPlayerController.h"
#include "InventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNREALRPG_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

// 	virtual void NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
// 
// 	UFUNCTION(BlueprintCallable, Category = "Drag and Drop")
// 	virtual void OnDropCPP();
// 
// 	UFUNCTION(BlueprintCallable, Category = "Drag and Drop")
// 	virtual void OnDragDetectedCPP();
// 	
// 	UFUNCTION(BlueprintCallable, Category = "Drag and Drop")
// 	virtual void OnDropCPP();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory")
	APlayerController* PlayerController;
};
