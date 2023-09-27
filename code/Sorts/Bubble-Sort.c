// Bubble sort in C
#include <stdio.h>

void bubbleSort(int array[], int size){
    // loop to access each array element
    for (int step = 0; step < size-1; ++step){
        // loop to compare array elements
        for (int i = 0; i < size-step-1; ++i){
            // compare two adjacent elements
            if (array[i] > array[i+1]){
                // swapping elements
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    printArray(data, size);
}

