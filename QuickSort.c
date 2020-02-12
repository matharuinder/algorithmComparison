/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Sorting Algorithm: Quick sort
*/
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include "SortingAlgos.h"

void quickSort( int a[], long l, long r)
{
   long j;

   if( l < r )
   {
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }

}
long partition( int a[], long l, long r) {
   long pivot, i, j, t;
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

