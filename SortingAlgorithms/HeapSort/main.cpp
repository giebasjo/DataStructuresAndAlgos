#include <iostream>
using std::cout; using std::endl;

#include "HeapSortImplementation.cpp"

void heapify( int arr[], int n, int i );
void heapSort( int arr[], int n );
void printArr( int arr[], int n );

int main() {


    int arr[] = {12,11,13,7,342,32,1,0,28,-2};
    int n = sizeof(arr)/(sizeof(arr[0]));

    cout << "Input Array: ";
    printArr( arr, n );

    heapSort( arr, n );

    cout << "\nOutput Array: ";
    printArr( arr, n );

    return 0;

}


