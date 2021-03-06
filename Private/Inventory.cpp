// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#include "UnrealRPGPrivatePCH.h"
#include "Inventory.h"



void FInventory::OnInit(int32 InItemCount)
{
	Items.SetNumZeroed(InItemCount);
}

TSharedPtr<FItemBase> FInventory::GetItemAt(int32 id)
{
	if (id < Items.Num())
	{
		return Items[id];
	}

	return nullptr;
}

TSharedPtr<FItemBase> FInventory::SwapItemAt(int32 id, TSharedPtr<FItemBase> item)
{
	
	if (id < Items.Num())
	{
		TSharedPtr<FItemBase> tmp = item;
		item = Items[id];
		Items[id] = tmp;
		return item;
	}

	return item;
}

int32 FInventory::GetMaxCount()
{
	return Items.Num();
}
