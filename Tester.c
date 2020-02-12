/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Implementation of sorting
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SortingAlgos.h"

#define ARRSIZE 100000 // size of the array
#define MAX 100000 // Maximum for pseudo-random number generator
#define MIN 100   // Minimum for pseudo-random number generator



 void testSelectionSort(long size){

    //printf("HERE\n");
     int arr[size];
    //printf("HERE\n");
    srand(time(NULL));
    for(long ctr = 0; ctr < size; ctr++)
        arr[ctr]= rand()%(MAX-MIN) + MIN;


    int startTimeSelectionSort = time(NULL);
    //for(int dex = 0; dex < ARRSIZE; dex++)
        sortSelection(arr, size);
        printf("\nSelection sort time: %d\n",time(NULL) - startTimeSelectionSort);
        for ( long dex1 = size-100; dex1 < size; dex1++)
            printf("%d \t", arr[dex1]);
            printf("\n");

 }


  void testInsertionSort(long size){

    //printf("HERE\n");
     int arr[size];
    //printf("HERE\n");
    srand(time(NULL));
    for(long ctr = 0; ctr < size; ctr++)
        arr[ctr]= rand()%(MAX-MIN) + MIN;


    int startTimeSelectionSort = time(NULL);
    //for(int dex = 0; dex < ARRSIZE; dex++)
        sortInsertion(arr, size);
        printf("\nInsertion sort time: %d\n",time(NULL) - startTimeSelectionSort);
        for ( long dex1 = size-100; dex1 < size; dex1++)
            printf("%d \t", arr[dex1]);
            printf("\n");

 }

//  void testSelectionSortWithHeap(long size){
//
//    //printf("HERE\n");
//     int arr[size];
//    //printf("HERE\n");
//    srand(time(NULL));
//    for(long ctr = 0; ctr < size; ctr++)
//        arr[ctr]= rand()%(MAX-MIN) + MIN;
//
//
//    int startTimeSelectionSort = time(NULL);
//    //for(int dex = 0; dex < ARRSIZE; dex++)
//        sortSelection(arr, size);
//        printf("\nSelection sort time: %d\n",time(NULL) - startTimeSelectionSort);
//        for ( long dex1 = ARRSIZE-100; dex1 < size; dex1++)
//            printf("%d \t", arr[dex1]);
//            printf("\n");
//
// }

  void testQuickSort(long size){

  if(size == 1000000){
    printf("HERE\n");
    return;
  }
     int arr[size];

    srand(time(NULL));
    for(long ctr = 0; ctr < size; ctr++)
        arr[ctr]= rand()%(MAX-MIN) + MIN;

    int startTimeSelectionSort = time(NULL);
    //for(int dex = 0; dex < ARRSIZE; dex++)
        quickSort(arr, 0,size-1);
        printf("\nQuick sort time: %d\n",time(NULL) - startTimeSelectionSort);
        for ( long dex1 = size-100; dex1 < size; dex1++)
            printf("%d \t", arr[dex1]);
            printf("\n");

 }

 void selectionSortOption(int choice){

    if(choice == 0){
        testSelectionSort(100000);
    }
    if(choice == 1){
        testSelectionSort(500000);
    }
    if(choice == 2){

    srand(time(NULL));
    Node *top = makeNode(rand()%10000);
    Node *ptr ;
    for(long i=0 ; i<1000000 ; i++)
    {
        ptr=makeNode(rand()%10000);
        addNode(&ptr ,&top);
    }
        int startTimeSelectionSort = time(NULL);
        selection_sort(top);
        printf("\nSelection sort time: %d\n",time(NULL) - startTimeSelectionSort);
        printList(top,1000000);
    }
 }

 void quickSortOption(int choice){

    if(choice == 0){
        testQuickSort(100000);
    }
    if(choice == 1){
        testQuickSort(500000);
    }
    if(choice == 2){

        int *arr;
        arr = (int *)malloc(1000000 * sizeof(int));

        srand(time(NULL));
        for(long ctr = 0; ctr < 1000000; ctr++)
            arr[ctr]= rand()%(MAX-MIN) + MIN;

        int startTimeSelectionSort = time(NULL);
    //for(int dex = 0; dex < ARRSIZE; dex++)
        quickSort(arr, 0,1000000-1);
        printf("\nQuick sort time: %d\n",time(NULL) - startTimeSelectionSort);
        for ( long dex1 = 1000000-100; dex1 < 1000000; dex1++)
            printf("%d \t", arr[dex1]);
            printf("\n");

    }

 }

  void insertionSortOption(int choice){

    if(choice == 0){
        testInsertionSort(100000);
    }
    if(choice == 1){
        testInsertionSort(500000);
    }
    if(choice == 2){

        int *arr;
        arr = (int *)malloc(1000000 * sizeof(int));

        for(long ctr = 0; ctr < 1000000; ctr++)
            arr[ctr]= rand()%(MAX-MIN) + MIN;

        int startTimeSelectionSort = time(NULL);
    //for(int dex = 0; dex < ARRSIZE; dex++)
        sortInsertion(arr,1000000);
        printf("\nInsertion sort time: %d\n",time(NULL) - startTimeSelectionSort);
        for ( long dex1 = 1000000-100; dex1 < 1000000; dex1++)
            printf("%d \t", arr[dex1]);
            printf("\n");

    }

 }

void selection_sort(Node* top){

  Node* sr=NULL;
  Node* help=NULL;

  int sort_value;

  while(top){
    sr=top;
    help=top->next;
    /*Find smallest element*/
    while(help){
        /*compare data*/
      if(help->data<sr->data){
        sr=help;
      }
      /*Move next node*/
      help=help->next;
    }
    if(sr!=top){
      /*interchange node data*/
      sort_value=sr->data;
      sr->data=top->data;
      top->data=sort_value;
    }
    /*Move next node*/
    top=top->next;
  }
}

Node* makeNode(int x)
{
    Node* ptr =(Node*)malloc(sizeof(Node));
    ptr->data=x;
    ptr->next=NULL;
    return ptr;



}

void addNode(Node* *ptr, Node* *top)

{
    (*ptr)->next = *top;
    *top = *ptr;
}

void printList(Node* top,long size)
{
    if(top==NULL)
    {
        printf("list is is empty");
        return;
    }
    for ( long dex1 = size-100; dex1 < size; dex1++)
            //printf("%d \t", arr[dex1]);
    {
        printf("%d \t",top->data);
        top=top->next;
    }
    printf("\n");
}
