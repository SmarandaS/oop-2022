#include "Sort.h"
#include <iostream>



int main()
{
    Sort MinMax(20, 10, 100);
    MinMax.InsertSort(true);
    MinMax.Print();
    int elemente = MinMax.GetElementsCount();
    std::cout << elemente << std::endl;

    int vector[6] = { 7,4,9,8,2,0 };
    Sort Vect(vector, 6);
    Vect.InsertSort(false);
    Vect.Print();
    int elem = Vect.GetElementFromIndex(4);
    std::cout << elem << std::endl;

    Sort Variadic(7, 9, 8, 3, 6, 5, 2, 0);
    Variadic.BubbleSort(true);
    Variadic.Print();

    
    Sort Chars("25,10,30,9,35,87,");
    Chars.BubbleSort(false);
    Chars.Print();
    
   

    return 0;
}


