/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Sorting Algorithm: Quick sort for searching
*/
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include"SortingAlgos.h"

void quickSortx( int a[], int l, int r)
{
   int j;

   if( l < r )
   {
   	// divide and conquer
        j = partitionx( a, l, r);
       quickSortx( a, l, j-1);
       quickSortx( a, j+1, r);
   }

}
int partitionx( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;

   while(1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}

