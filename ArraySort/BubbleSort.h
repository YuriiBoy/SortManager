#pragma once
#include "SortManager.h"

class BubbleSort :   public virtual SortManager
{
public:
	void bubblesort();
	void message() override;
};

