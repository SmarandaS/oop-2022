#pragma once

class Sort

{
    int nr_elem;
    int *vect;

public:

    Sort(int nr_elem, int mini, int maxi);
    Sort(int *vect,int nr_elem);
    Sort(int count, ...);
    Sort(const char* string);

    void InsertSort(bool ascendent = false);

    /*int Partition(int* vect, int low, int high);

    void QSort(int* vect, int low, int high);*/

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};
