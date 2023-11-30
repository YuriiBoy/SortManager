#include "Header.h"
#include "UniverSort.h"

UniverSort::UniverSort() : SortManager()
{
}

UniverSort::UniverSort(int size, int a, int b, std::vector<int> Array)
	: SortManager(size, a, b, Array)
{}

void UniverSort::setArray()
{
	SortManager::setArray();
}

void UniverSort::display()
{
	SortManager::display();
}

void UniverSort::message()
{
	std::cout << "\n Array: \n";
}
