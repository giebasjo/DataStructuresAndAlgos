#include <iostream>
using std::cout; using std::endl;

void swap( int *x_pt, int *y_pt ) {

    int temp = *x_pt;
    *x_pt = *y_pt;
    *y_pt = temp;

}

void bubbleSort( int arr[], int n ) {

    int i, j;
    for ( i=0; i < n-1; i++ ) {

        for ( j=0; j < n-i-1; j++ ) {

            if ( arr[j] > arr[j+1] ) {

                swap( &arr[j], &arr[j+1] );

            }

        }

    }

}

void printArr( int arr[], int size ) {

    for ( int i=0; i < size; i++ ) {

        printf("%d ", arr[i]);
    
    }
    printf("\n");

}

int main () {

    int arr[] = {23,45,124,3256,232,1,42,4,-2};
    int size = (sizeof(arr))/(sizeof(arr[0]));
    
    cout << "Input Array: \n";
    printArr( arr, size );
    
    bubbleSort( arr, size );
    
    cout << "\nSorted Array: \n";
    printArr( arr, size );

    return 0;

} 















