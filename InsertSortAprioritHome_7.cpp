// InsertSortAprioritHome_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    const int arr[] { 1, 9, 8, 6, 7, 2, 4, 5, 3 };
    const int* ptrArr[10] = {};

    const int szArr = sizeof(arr) / sizeof(arr[0]);
    const int* e = arr + szArr;
    // fill array
    for (int i = 0; i < szArr; i++)
    {
        ptrArr[i] = arr + i;
    }

    // print array
    for (int i = 0; i < szArr; i++)
    {
        std::cout << *(ptrArr[i]) << " ";
    } std::cout << "\n";

    //InsertSort
    ptrArr[0] = arr;
    for (int i = 1; i < szArr; i++)
    {
        int j = i;
        //int cur = arr[i];
        //int cur = *(ptrArr[i]);
        const int* curPtr = ptrArr[i];
        while (j >= 0 && *curPtr <= /*arr[j]*/ *(ptrArr[j]))
        {
            --j;
        }
        ++j;
        
        for (int k = i; k >= j; k--)
        {
            //arr[k] = arr[k - 1];
            ptrArr[k] = ptrArr[k - 1];
        }
        //arr[j] = cur;
        ptrArr[j] = curPtr;
    }

    //print array
    for (int i = 0; i < szArr; i++)
    {
        std::cout << *(ptrArr[i]) << " ";
    } std::cout << "\n";
    
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
