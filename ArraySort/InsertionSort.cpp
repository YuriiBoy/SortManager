#include "Header.h"
#include "InsertionSort.h"


void InsertionSort::insertionSort()
{
    int key = 0;
    int j = 0;
    for (int i = 1; i < size; i++) {
        key = Array.at(i);
        j = i - 1;
        while ((j >= 0) && (Array.at(j) > key)) {
            Array.at(j + 1) = Array.at(j);
            j--;
        }
        Array.at(j + 1) = key;
    }
}


void InsertionSort::message()
{
	std::cout << "\n Insertion Sort\n";
}
