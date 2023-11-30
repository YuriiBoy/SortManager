#include "Header.h"
#include "SortManager.h"

SortManager::SortManager() :  size(0), a(0), b(0), Array(0)
{}

SortManager::SortManager(int size, int a, int b, std::vector<int> Array)
	: size(size), a(a), b(b), Array(Array)
{}
void SortManager::setArray()
{
	std::cout << "\n Input size of the array and range of the array : from - to : \n ";
	std::cin >> size >> a >> b;
	srand(time(NULL));
	
	std::unique_ptr<int[]> k(new int[size]{0});
	for (int i = 0; i < size; i++) {
		k[i] = rand() % (b - a + 1) + a;
		Array.push_back(k[i]);
	}
}

void SortManager::display()
{
	for (int i = 0; i < size; i++) {
		std::cout << std::setw(4) << Array.at(i);
	}
	std::cout << std::endl;
}






