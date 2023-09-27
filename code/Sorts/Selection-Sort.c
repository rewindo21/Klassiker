// Selection sort in C
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size){
    // loop to access each array element
    for (int step = 0; step < size-1; step++){
        int min = step;
        // loop to compare array elements
        for (int i = step+1; i<size; i++){
            // select the minimum element in each loop.
            if (array[i] < min) {
                min = i;
            }
        }
        // put min at the correct position
        swap(&array[min], &array[step]);
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

    selectionSort(data, size);
    printArray(data, size);
}
