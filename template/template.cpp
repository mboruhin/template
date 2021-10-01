#include <iostream>
#include "bubble_sort.h"

int main()
{
    std::cout << "Hello World!\n";
    int rand[10] = {5, 6, 4, 8, 2, 1, 7, 12, 3, 0};
    random_templates::BubbleSortArr<int>(rand, 10);
    for (int i = 0; i < 10; i++)
    {
        std::cout << rand[i] << " " ;
    }

    int adSectorSizes[10] = { 50, 60, 40, 8, 20, 1, 70, 12, 3, 0 };
    int adSectorindices[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


    std::cout << std::endl;
}
