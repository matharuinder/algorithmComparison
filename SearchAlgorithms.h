/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Header for search
*/
#ifndef SEARCHALGORITHMS_H_INCLUDED
#define SEARCHALGORITHMS_H_INCLUDED

// linearSearch function takes array name, its size and the key
// to search as arguments and returns the index of the key if it
// exists in the array else -1

int linearSearch(int list[], long numElements, int value);


// binarySearch function takes array name, its size and the key
// to search as arguments and returns the index of the key if it
// exists in the array else -1

int binarySearch(int array[], long numElems, int value);
void delay(int);

void sortSelection(int[], int);
void sortInsertion(int[], int);
// functions for heapsort
int max (int arr[], int n, int i, int j, int k);
// functions for Quicksort

void quickSortx( int[], int, int);
int partitionx( int[], int, int);



#endif // SEARCHALGORITHMS_H_INCLUDED
