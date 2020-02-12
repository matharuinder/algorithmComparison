/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Sorting Algorithm: Insertion sort
*/
#include <stdio.h>
#include <stdlib.h>
#include "SortingAlgos.h"

void sortInsertion(int arr[], long arrSize)
{   int j = 0, tmp = 0;
    for (int i = 1; i < arrSize; i++)
    {
        // a temporary copy of the current element
        tmp = arr[i];
        // find the position for insertion
        for (j = i; j > 0; j--)
        {
            if (arr[j - 1] < tmp)
                break;
            // shift the sorted part to right
            arr[j] = arr[j - 1];
        }

        // insert the current element
        arr[j] = tmp;
    }
}


