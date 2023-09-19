// Queue implementation
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
struct Queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// Function to create a queue of given capacity
struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
    queue->size = 0;
	queue->front = queue->size;
	queue->rear = capacity - 1;
	queue->array = (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}

// Queue is empty when size is 0
int isEmpty(struct Queue* queue)
{
	return (queue->size == 0);
}

// Queue is full when size becomes equal to the capacity
int isFull(struct Queue* queue)
{
	return (queue->size == queue->capacity);
}

// Function to add an item to the queue. It changes rear and size
void enqueue(struct Queue* queue, int item)
{
	if (isFull(queue)){
        printf("\n QUEUE IS FULL");
    } else {
        queue->rear = (queue->rear + 1) % queue->capacity;
        queue->array[queue->rear] = item;
        queue->size = queue->size + 1;
        printf("\n%d enqueued to queue", item);
    }
}

// Function to remove an item from queue. It changes front and size
int dequeue(struct Queue* queue)
{
	if (isEmpty(queue)) {
        printf("\n STACK IS EMPTY");
    } else {
	    int item = queue->array[queue->front];
	    queue->front = (queue->front + 1) % queue->capacity;
	    queue->size = queue->size - 1;
	    return item;
    }
}

// Function to print elements of queue
void printQueue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("\nQueue: empty");
    } else {
        printf("\nQueue: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->array[i]);
        }
    }
}


// Driver program to test above functions./
int main()
{
	struct Queue* queue = createQueue(10);

    printQueue(queue);

	enqueue(queue, 10);
	enqueue(queue, 20);
	enqueue(queue, 30);

    printQueue(queue);

	printf("\n%d dequeued from queue",dequeue(queue));

    printQueue(queue);

	return 0;
}

