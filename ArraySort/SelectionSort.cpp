#include "Header.h"
#include "SelectionSort.h"


void SelectionSort::selectionSort()
{
    int buff = 0;
    int _min = 0;
    int _pos = 0;
    //
    for (int i = 0; i < size - 1; i++) {
        _min = Array.at(i);
        _pos = i;
        //
        for (int j = i + 1; j < size; j++) {
            if (Array.at(j) < _min) {
                _min = Array.at(j);
                _pos = j;
            }
        }
        buff = Array.at(i);
        Array.at(i) = Array.at(_pos);
        Array.at(_pos) = buff;
    }
}

void SelectionSort::message()
{
	std::cout << "\n Selection Sort\n";
}
