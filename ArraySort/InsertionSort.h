#pragma once
#include "SortManager.h"
class InsertionSort :  public virtual SortManager
{
public:
	void insertionSort();
	void message() override;
};

