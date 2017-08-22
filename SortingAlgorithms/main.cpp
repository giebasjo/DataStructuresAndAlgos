#include <iostream>
using std::cout; using std::endl;

#include <random>
using std::rand;

#include <algorithm>
using std::copy;

#include <vector>
using std::vector;

#include <fstream>
using std::ofstream;

#include <time.h>
#include <string>

#include "./QuickSort/QuickSortImplementation.cpp"
#include "./HeapSort/HeapSortImplementation.cpp"
#include "./MergeSort/MergeSortImplementation.cpp"
//#include "./BubbleSort/fdsjalk;fjdalsk;fadjs"

void write_vectorElms_to_file( ofstream &f, vector< vector<double> > vec ) {

    for ( int i = 0; i < vec.size(); i++  ) {

        for ( int j = 0; j < vec[i].size(); j++  ) {

            f << vec[i].at(j) << " ";

        }

        f << "\n";

    }

}

void copyArray( int inputArray[], int receiverArray[], int sz ) {

    for ( int i = 0; i < sz; i++ ) {

        receiverArray[i] = inputArray[i];

    }

}

int main() {

    ofstream outFile;
    outFile.open( "sorting_algo_times.txt" );

    /* 
     * Initialize the arrays of various
     * sizes to be filled with random nums
     */
    int arr_1[10];
    int arr_2[100];
    int arr_3[1000];
    int arr_4[10000];
    int arr_5[100000];

    vector<double> quicksort_times;
    vector<double> heapsort_times;
    vector<double> mergesort_times;
    vector< vector<double> > algo_times;
    /*
     * Generate the random numbers
     * and fill the initalized arrays
     */
    for ( int i = 0; i<10; i++ ) {
        int random_num = rand() % 100;
        arr_1[i] = random_num;
    }
    for ( int i = 0; i<100; i++ ) {
        int random_num = rand() % 100;
        arr_2[i] = random_num;
    }
    for ( int i = 0; i<1000; i++ ) {
        int random_num = rand() % 100;
        arr_3[i] = random_num;
    }
    for ( int i = 0; i<10000; i++ ) {
        int random_num = rand() % 100;
        arr_4[i] = random_num;
    }
    for ( int i = 0; i<100000; i++ ) {
        int random_num = rand() % 100;
        arr_5[i] = random_num;
    }

    /*
     * Quicksort examination:
     *  1. Copy the unsorted arrays
     *  2. into a temparray we can reuse them
     */

    cout << "\n QUICK SORT ANALYSIS \n";

    // 10 element
    int temparr_1[10];
    copyArray(arr_1, temparr_1, 10);
    clock_t t;
    t = clock();
    quickSort( arr_1, 0, 9 );
    t = clock() - t;
    cout << "10 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_1, arr_1, 10 );
    double t_sec = ((double)t)/CLOCKS_PER_SEC;
    quicksort_times.push_back(t_sec);

    // 100 element
    int temparr_2[100];
    copyArray(arr_2, temparr_2, 100);
    quickSort( arr_2, 0, 99 );
    t = clock() - t;
    cout << "100 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_2, arr_2, 100 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    quicksort_times.push_back(t_sec);

    // 1000 element
    int temparr_3[1000];
    copyArray(arr_3, temparr_3, 1000);
    t = clock();
    quickSort( arr_3, 0, 999 );
    t = clock() - t;
    cout << "1000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_3, arr_3, 1000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    quicksort_times.push_back(t_sec);

    // 10000 element
    int temparr_4[10000];
    copyArray(arr_4, temparr_4, 10000);
    t = clock();
    quickSort( arr_4, 0, 9999 );
    t = clock() - t;
    cout << "10000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_4, arr_4, 10000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    quicksort_times.push_back(t_sec);

    // 100000 element
    int temparr_5[100000];
    copyArray(arr_5, temparr_5, 100000);
    t = clock();
    quickSort( arr_5, 0, 99999 );
    t = clock() - t;
    cout << "100000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_5, arr_5, 100000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    quicksort_times.push_back(t_sec);

    cout << "\n HEAPSORT ANALYSIS \n";

    // 10 element
    copyArray(arr_1, temparr_1, 10);
    t = clock();
    heapSort( arr_1, 10 );
    t = clock() - t;
    cout << "10 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_1, arr_1, 10 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    heapsort_times.push_back(t_sec);

    // 100 element
    copyArray(arr_2, temparr_2, 100);
    heapSort( arr_2, 100 );
    t = clock() - t;
    cout << "100 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_2, arr_2, 100 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    heapsort_times.push_back(t_sec);

    // 1000 element
    copyArray(arr_3, temparr_3, 1000);
    t = clock();
    heapSort( arr_3, 1000 );
    t = clock() - t;
    cout << "1000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_3, arr_3, 1000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    heapsort_times.push_back(t_sec);

    // 10000 element
    copyArray(arr_4, temparr_4, 10000);
    t = clock();
    heapSort( arr_4, 10000 );
    t = clock() - t;
    cout << "10000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_4, arr_4, 10000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    heapsort_times.push_back(t_sec);

    // 100000 element
    copyArray(arr_5, temparr_5, 100000);
    t = clock();
    heapSort( arr_5, 100000 );
    t = clock() - t;
    cout << "100000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_5, arr_5, 100000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    heapsort_times.push_back(t_sec);

    cout << "\n MERGESORT ANALYSIS \n";

    // 10 element
    copyArray(arr_1, temparr_1, 10);
    t = clock();
    mergeSort( arr_1, 0, 10 );
    t = clock() - t;
    cout << "10 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_1, arr_1, 10 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    mergesort_times.push_back(t_sec);

    // 100 element
    copyArray(arr_2, temparr_2, 100);
    mergeSort( arr_2, 0, 100 );
    t = clock() - t;
    cout << "100 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_2, arr_2, 100 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    mergesort_times.push_back(t_sec);

    // 1000 element
    copyArray(arr_3, temparr_3, 1000);
    t = clock();
    mergeSort( arr_3, 0, 1000 );
    t = clock() - t;
    cout << "1000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_3, arr_3, 1000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    mergesort_times.push_back(t_sec);

    // 10000 element
    copyArray(arr_4, temparr_4, 10000);
    t = clock();
    mergeSort( arr_4, 0, 10000 );
    t = clock() - t;
    cout << "10000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_4, arr_4, 10000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    mergesort_times.push_back(t_sec);

    // 100000 element
    copyArray(arr_5, temparr_5, 100000);
    t = clock();
    mergeSort( arr_5, 0, 100000 );
    t = clock() - t;
    cout << "100000 elements: It took " << ((double)t)/CLOCKS_PER_SEC << " seconds\n";
    copyArray( temparr_5, arr_5, 100000 );
    t_sec = ((double)t)/CLOCKS_PER_SEC;
    mergesort_times.push_back(t_sec);

    algo_times.push_back(quicksort_times);
    algo_times.push_back(heapsort_times);
    algo_times.push_back(mergesort_times);

    write_vectorElms_to_file( outFile, algo_times );


/*
    cout << "\nPRINTING VECTORS\n";
    printVec(quicksort_times);
    cout << "\n";
    printVec(heapsort_times);
    cout << "\n";
    printVec(mergesort_times);
    cout << "\n";
*/

}




