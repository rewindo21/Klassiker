// Stack implementation in C

/*
The operations work as follows:

A pointer called TOP is used to keep track of the top element in the stack.
When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
On popping an element, we return the element pointed to by TOP and reduce its value.
Before pushing, we check if the stack is already full
Before popping, we check if the stack is already empty
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10          // A constant with a value of 10, representing the maximum number of elements the stack can hold.
int count = 0;          // A variable with a value of 0, which will be used to keep track of the number of elements currently in the stack. (Used for printing elements)


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
        printf("\n STACK IS FULL \n");
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    count++;
}


// Remove element from stack
void pop(st *s) {
    if (isEmpty(s)) {
        printf("\n STACK IS EMPTY \n");
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
}


// Driver code
int main() {
    st *s = (st *)malloc(sizeof(st));       // This line of code allocates memory to hold an 'st' structure dynamically, and 's' becomes a pointer to that allocated memory.

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);

    printStack(s);

    pop(s);
    
    printf("\n After popping out: \n");
    printStack(s);

}

