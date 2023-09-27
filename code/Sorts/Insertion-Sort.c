// Insertion sort in C
#include <stdio.h>

void insertionSort(int array[], int size){
    // loop to access each array element
    for (int step = 0; step < size-1; step++){
        int key = array[step+1];
        int j = step;
        // loop to compare key with each element on the left of it until an element smaller than it is found
        while (key < array[j] && j >= 0){
            // move sorted element to the right by 1
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);
    printArray(data, size);
}
