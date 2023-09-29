// Linear Search in C
#include <stdio.h>

int linearSearch(int array[], int n, int goal) {
    for (int i = 0; i < n; i++)
        if (array[i] == goal)
        return i;
    return -1;
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int goal = 1;

    int result = linearSearch(array, n, goal);

    (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
