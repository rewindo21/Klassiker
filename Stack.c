// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>

#define MAX 10          // A constant with a value of 10, representing the maximum number of elements the stack can hold.
int count = 0;          // A variable with a value of 0, which will be used to keep track of the number of elements currently in the stack.


// Creating a stack
struct stack {
    int items[MAX];     // An integer array to hold the stack elements
    int top;            // An integer to keep track of the top element's index
};
typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}


// Check if the stack is full
int isfull(st *s) {
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}


// Check if the stack is empty
int isEmpty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}


// Add elements into stack
void push(st *s, int newitem) {
    if(isfull(s)) {
        printf("STACK IS FULL");
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    count++;
}


// Remove element from stack
void pop(st *s) {
    if (isEmpty(s)) {
        printf("STACK IS EMPTY");
    } else {
        s->top--;
    }
    count--;
}


// Print elements of stack
void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}


// Driver code
int main() {
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);
    
    printf("\nAfter popping out\n");
    printStack(s);

}

