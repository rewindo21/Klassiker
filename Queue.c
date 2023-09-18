#include <stdio.h>
#define SIZE 10

int items[SIZE], front = -1, rear = -1;

// Add element into queue
void enQueue(int value) {
    if (rear == SIZE - 1)
        printf("\n QUEUE IS FULL \n");
    else {
        if (front == -1)
        front = 0;
    rear++;
    items[rear] = value;
    printf("\n Added -> %d", value);
    }
}

// Remove element into queue
void deQueue() {
    if (front == - 1)
        printf("\n QUEUE IS EMPTY \n");
    else {
        printf("\n Removed -> %d", items[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

// Print elements of queue
void printQueue() {
    if (rear == -1)
        printf("\n QUEUE IS EMPTY \n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
        printf("%d ", items[i]);
    }
    printf("\n");
}


