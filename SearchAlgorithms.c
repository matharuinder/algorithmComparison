/*
Final Project
1.Prabhdaman Singh Kareer (991478152)
2.Inderpreet Singh Matharu (991491804)
3.Gurcharan Singh (991485723)
Search methods
*/
#define COUNTER 100

void delay(int max){
    float sum=0;
    for(int dex = 0; dex < max; dex++)
    sum+=dex;}

int linearSearch(int list[], long numElements, int value) {
int index = 0, position = -1, found = 0;
while (index < numElements && !found) {
// introduce  known delay
delay(COUNTER);

if (list[index] == value) {
found = 1;
position = index;
}
index++;
}
return position;
}


int binarySearch(int array[], long numElems, int value) {
int first = 0, last = numElems-1, middle, position = -1, found = 0;
while(!found && first <= last) {
middle = (first + last) / 2;
if (array[middle] == value) {
found = 1;
position = middle;
} else if (array[middle] > value){
last = middle -1;
// introduce  known delay
delay(COUNTER);
}
else{

first = middle + 1;
// introduce  known delay
delay(COUNTER);
}
}
return position;
}


