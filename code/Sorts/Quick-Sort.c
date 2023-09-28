// Quick sort in C
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int array[], int low, int high){
    // select the rightmost element as pivot
    int pivot = array[high];
    // pointer for greater element
    int i = (low - 1);
    // traverse each element of the array
    for (int j = low; j < high; j++) {
        // compare them with the pivot. If element smaller than pivot is found swap it with the greater element pointed by i
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    // swap the pivot element with the greater element at i
    swap(&array[i + 1], &array[high]);
    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high){
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
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
    int right = size - 1;
    int left = 0;

    quickSort(data, left, right);
    printArray(data, size);
}