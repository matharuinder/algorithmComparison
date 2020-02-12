/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Implementation of searching
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SearchAlgorithms.h"

#define ARRSIZE 5000 // size of the array
#define MAX 300000 // Maximum for pseudo-random number generator
#define MIN 1   //


char temp[120];

void testLinearSearch(long size,int numberToSearch){


    long indexofNumberToSearch = 0;

    int arr[size];
    srand(time(NULL));
    for(int dex = 0; dex < size; dex++)
{
        arr[dex] = rand()%(MAX - MIN) + MIN;
        if(dex<100)
        printf("%d       %d\n",dex,arr[dex]);
}
   int searchNum;
         int q=0;

           printf("please enter the number you want to search : \n ");
               while(q!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                q=sscanf(temp,"%d",&searchNum);
                if(q!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(searchNum<0 || searchNum >100000)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                q=0;
                }
            }
         numberToSearch = searchNum;




    //int numberToSearch = 2000;

    int linearSearchStartTime = time(NULL);
    indexofNumberToSearch = linearSearch(arr, size, numberToSearch);
    printf("\nTime taken by linear search is %d sec.", time(NULL) - linearSearchStartTime);

    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }
    else
        printf("\nThe number %d is at position %ld \n", arr[indexofNumberToSearch], indexofNumberToSearch);

}

void linearSearchOption(int choice,int num){

    if(choice == 0){
        testLinearSearch(100000,num);
    }

    if(choice == 1){
        testLinearSearch(500000,num);
    }
    if(choice == 2){

        int *arr;
        arr = (int *)malloc(1000000 * sizeof(int));

        for(long ctr = 0; ctr < 1000000; ctr++){
            arr[ctr]= rand()%(MAX-MIN) + MIN;
            if(ctr<100)
                printf("%d       %d\n",ctr, arr[ctr]);
        }

 int searchNum;
         int q=0;

           printf("please enter the number you want to search : \n ");
               while(q!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                q=sscanf(temp,"%d",&searchNum);
                if(q!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(searchNum<0 || searchNum >100000)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                q=0;
                }
            }
            num=searchNum;
        long indexofNumberToSearch = 0;
        int startTimeSelectionSort = time(NULL);
        indexofNumberToSearch = linearSearch(arr, 1000000, num);
        printf("\nTime taken by linear search is %d sec.", time(NULL) - startTimeSelectionSort);

    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }
    else
        printf("\nThe number %d is at position %ld \n", arr[indexofNumberToSearch], indexofNumberToSearch);
    }
}

void testBinarySearch(long size,int numberToSearch){
    long indexofNumberToSearch = 0;


    int arr[size];
    srand(time(NULL));
    for(int dex = 0; dex < size; dex++){
        arr[dex] = rand()%(MAX - MIN) + MIN;

    }
 int searchNum;
         int q=0;
quickSortx(arr, 0, size - 1);
for(int i =0;i<100;i++){
        printf("%d       %d\n",i,arr[i]);
    }
           printf("please enter the number you want to search : \n ");
               while(q!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                q=sscanf(temp,"%d",&searchNum);
                if(q!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(searchNum<0 || searchNum >100000)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                q=0;
                }
            }
            numberToSearch=searchNum;
    int binarySearchStartTime = time(NULL);

    indexofNumberToSearch = binarySearch(arr,size,numberToSearch);
    printf("\nTime taken by binary search is %d sec.", time(NULL) - binarySearchStartTime);

    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }
    else
        printf("\nThe number %d is at position %ld \n", arr[indexofNumberToSearch], indexofNumberToSearch);

}

void binarySearchOption(int choice,int num){
    if(choice == 0){
        testBinarySearch(100000,num);
    }
    if(choice == 1){
        testBinarySearch(500000,num);
    }
    if(choice == 2){

    srand(time(NULL));
        int *arr;
        arr = (int *)malloc(1000000 * sizeof(int));

        for(int dex = 0; dex < 1000000; dex++){
        arr[dex] = rand()%(MAX - MIN) + MIN;

    }
quickSortx(arr, 0, 1000000 - 1);
    for(int i =0;i<100;i++){
        printf("%d       %d\n",i,arr[i]);
    }
 int searchNum;
         int q=0;

           printf("please enter the number you want to search : \n ");
               while(q!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                q=sscanf(temp,"%d",&searchNum);
                if(q!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(searchNum<0 || searchNum >100000)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                q=0;
                }
            }
            num=searchNum;
    int binarySearchStartTime = time(NULL);

    long indexofNumberToSearch = binarySearch(arr,1000000,num);
    printf("\nTime taken by binary search is %d sec.", time(NULL) - binarySearchStartTime);

    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }
    else
        printf("\nThe number %d is at position %ld \n", arr[indexofNumberToSearch], indexofNumberToSearch);
}
}

