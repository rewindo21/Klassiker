// Binary Search in C
#include <stdio.h>

int binarySearch(int array[], int low, int high, int goal) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == goal)
      return mid;

    if (array[mid] > goal)
    // Search the left half
      return binarySearch(array, low, mid - 1, goal);

    // Search the right half
    return binarySearch(array, mid + 1, high, goal);
  }
  return -1;
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int low = 0;
    int high = n-1;
    int goal = 1;

    int result = binarySearch(array, low, high, goal);

    (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
