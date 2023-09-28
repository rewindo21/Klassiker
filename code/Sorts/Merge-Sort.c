// Merge sort in C
#include <stdio.h>

void merge(int array[], int left, int center, int right){
    // create left and right array
    int n1 = center - left + 1;
    int n2 = right - center;
    int leftArray[n1], rightArray[n2];
    // copy elements of array to temporary arrays
    for (int i = 0; i < n1; i++){
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < n2; j++){
        rightArray[j] = array[center + 1 + j];
    }
    // compare elements of each temporary arrays and merge 
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
    if (leftArray[i] <= rightArray[j]) {
      array[k] = leftArray[i];
      i++;
    } else {
      array[k] = rightArray[j];
      j++;
    }
    k++;
    }
    // pick up the remaining elements and put in merged array
    while (i < n1) {
    array[k] = leftArray[i];
    i++;
    k++;
    }
    while (j < n2) {
    array[k] = rightArray[j];
    j++;
    k++;
    }
}


void mergeSort(int array[], int left, int right){
    if (left < right) {     // Check if there are at least two elements in the array 
        
        // The point where the array is divided into two subarrays
        int center = left + (right-1) / 2;
        
        // Recursively sort the left and right subarrays
        mergeSort(array, left, center);      // Sort the left half
        mergeSort(array, center+1, right);   // Sort the right half

        // Merge the sorted subarrays
        merge(array, left, center, right);
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
    int right = size - 1;
    int left = 0;

    mergeSort(data, left, right);
    printArray(data, size);
}