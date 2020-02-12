/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
This Comprises of Consol Application interface
*/
#include <stdio.h>
#include <stdlib.h>
char temp[120];

int Sort(int x)     //  Sort(Size)
{
    int select=0;
    int m=0;
    int q=0;

           printf("1.Quick Sort \n");
           printf("2.Insertion Sort \n");
           printf("3.Selection Sort\n");
           printf("0.Exit \n");
           printf("4.Back to Main Menu\n");


            while(m!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                m=sscanf(temp,"%d",&select);
                if(m!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(select<0 || select >4)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                m=0;
                }
            }

    if(select==1)    // Quick sort
    {
        quickSortOption(x-1);
        Menu();
    }
    if(select==2)     // insertion sort
    {
        insertionSortOption(x-1);
        Menu();
    }
    if(select==3) // selection sort
    {
        selectionSortOption(x-1);
        Menu();
    }
    if(select==0)
    {
        return 1;
    }
    if(select==4)
    {
        Menu();
    }
}
int Search(int x)
{

    int select=0;
    int searchNum;
    int m=0;
    int q=0;




           printf("Please choose the algorithium : \n");
           printf("1.Linear Search \n");
           printf("2.Binary Search \n");
           printf("0.Exit \n");
           printf("3.Back to Main Menu\n");


            while(m!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                m=sscanf(temp,"%d",&select);
                if(m!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(select<0 || select >3)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                m=0;
                }
            }

    if(select==1)    // Quick sort
    {
       linearSearchOption(x-1,0);
        Menu();
    }
    if(select==2)     // insertion sort
    {
      binarySearchOption(x-1,searchNum);
      Menu();
    }
    if(select==0)
    {
        return 1;
    }
    if(select==3)
    {
        Menu();
    }

}

int Size(int x)
{
    int select=0;
    int m=0;
    int q=0;

    printf("Select size of dataset : \n");
    printf("1.small \n");
    printf("2.medium \n");
    printf("3.large \n");
    printf("0.Exit \n");
    printf("4.Back to main \n");

     while(m!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                m=sscanf(temp,"%d",&select);
                if(m!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(select<0 || select >4)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                m=0;
                }
            }

    if(select==0)
    {
       return 1;
    }
     if(select==4)
    {
       Menu();
    }
    if(x==1)    // small
    {
       int j= Sort(select);
       if(j==1)
       {
           return 1;
       }
    }
    if(x==2)     // medium
    {
       Search(select);
    }

    if(x==0)
    {
       return 1;
    }

}
void Menu()
{
    int result=0;
    int select=0;
    int m=0;
    int q=0;

    while(result!=1)
    {
    printf("Menu \n \n");
    printf("please enter your choice \n \n");
    printf("1.Sorting Algorithium \n");
    printf("2.Searching Algorithium\n");
    printf("0.Exit\n \n");

     while(m!=1)
            {
                fgets(temp,sizeof(temp),stdin);
                m=sscanf(temp,"%d",&select);
                if(m!=1)
                {
                printf("invalid input please try again \n \n");
                }
                if(select<0 || select >3)
                {
                printf("please choose appropriate number avalaible in the given range | try again  \n \n");
                m=0;
                }
            }
        if(select==0)
        {
            printf("Thanks have a nice Day !");
            exit(0);
        }
       result=Size(select);

       if(result == 1 )
       {
           printf("Thanks have a nice Day !");
           exit(0);
       }


     }

}
