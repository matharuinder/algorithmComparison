/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Header for sort
*/
#ifndef SORTINGALGOS_H_INCLUDED
#define SORTINGALGOS_H_INCLUDED
typedef struct nd
{
    int data;
    struct nd* next;
}Node;

void sortSelection(int[], long);
void sortInsertion(int[], long);

// functions for heapsort
int max (int arr[], int n, int i, int j, int k);
void downheap (int arr[], int n, int i);
void heapsort (int arr[], int n);
// functions for Quicksort

void quickSort( int[], long, long);
long partition( int[], long, long);

Node* makeNode(int x);
void addNode(Node ** , Node **);
void selection_sort(Node* top);

#endif // SORTINGALGOS_H_INCLUDED
