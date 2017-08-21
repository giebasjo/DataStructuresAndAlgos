#include <iostream>
using std::cout; using std::endl;
#include <stdio.h>
#include "QuickSortImplementation.cpp"

void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArr( int arr[], int size);

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Input Array: \n";
    printArr(arr,n);

    quickSort(arr, 0, n-1);

    cout << "\nSorted array: \n";
    printArr(arr, n);

    return 0;

}
