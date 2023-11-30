#pragma once
#include "SortManager.h"
class SelectionSort :   public virtual SortManager
{
public:
	void selectionSort();
	void message() override;
};

