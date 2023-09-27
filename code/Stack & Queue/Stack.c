// Stack implementation
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

// Function to create a stack of given capacity
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity - 1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack* stack, int item)
{
	if (isFull(stack)) {
        printf("\n STACK IS FULL");
    } else {
	    stack->top++;
	    stack->array[stack->top] = item;
	    printf("\n%d pushed to stack", item);
    }
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack)
{
	if (isEmpty(stack)) {
        printf("\n STACK IS EMPTY");
    } else {
	    return stack->array[stack->top--];
    }
}

// Function to print elements of stack
void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("\nStack: empty");
    } else {
        printf("\nStack: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->array[i]);
        }
    }
}


// Driver program to test above functions
int main()
{
	struct Stack* stack = createStack(10);

    printStack(stack);

	push(stack, 10);
	push(stack, 20);
	push(stack, 30);

    printStack(stack);

    printf("\n%d popped from stack", pop(stack));
    
    printStack(stack);

	return 0;
}


