#pragma once
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

class UniverSort :  public BubbleSort,  public SelectionSort, public InsertionSort
{
public:
	UniverSort();
	UniverSort(int size, int a,	int b,	std::vector<int> Array);
	void setArray() override;
	void display() override;
	void message() override;
};

