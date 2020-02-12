/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Sorting Algorithm: Selection sort
*/
#include <stdio.h>
#include <stdlib.h>
#include "SortingAlgos.h"

void sortSelection(int arr[], long arrSize){
long min = 0, temp = 0;

    for (long i = 0; i < arrSize ; i++)
    {
        min = i;  // record the position of the smallest
        for (long j = i + 1; j < arrSize; j++)
        {
            // update min when finding a smaller element
            if (arr[j] < arr[min])
                min = j;
        }

        // put the smallest element at position i
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }

}
