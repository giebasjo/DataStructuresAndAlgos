#include <iostream>
using std::cout; using std::endl;

#include <vector>
#include "MergeSortImplementation.cpp"


void merge( int arr[], int l, int m, int r );
void mergeSort(int arr[], int l, int r);

void printArray( int A[], int size );



int main() {

    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;

}