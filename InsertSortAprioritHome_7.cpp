// InsertSortAprioritHome_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void ArrayPrint(int* b, int* e);
void InsertSort(int* arr, int sz);

int main()
{
    int arr[] { 1, 9, 8, 6, 7, 2, 4, 5, 3 };
    const int szArr = sizeof(arr) / sizeof(arr[0]);
    ArrayPrint(arr, arr + szArr);
    InsertSort(arr, szArr);
    ArrayPrint(arr, arr + szArr);
}

void ArrayPrint(int* b, int* e)
{
    for (; b != e; ++b)
    {
        std::cout << *b << " ";
    }
    std::cout << "\n";
}

void InsertSort(int* arr, int sz)
{
    for (int i = 1; i < sz; i++)
    {
        int j = i;
        int cur = arr[i];
        while (j >= 0 && cur <= arr[j])
        {
            --j;
        }
        ++j;
        //std::cout << "j = " << j << "\n";
        for (int k = i; k >= j; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[j] = cur;
    }
    
}
