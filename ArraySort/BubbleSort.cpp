#include "Header.h"
#include "BubbleSort.h"



void BubbleSort::bubblesort()
{
    int buff = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (Array.at(j) > Array.at(j + 1)) {
                buff = Array.at(j);
                Array.at(j) = Array.at(j + 1);
                Array.at(j + 1) = buff;
            }
        }
    }
}


void BubbleSort::message()
{
	std::cout << "\n Bubble Sort\n";

}
