// LinkedList implementation
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;


// Function to create a node
void push(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 
    temp->data = data;
    temp->next = head;
 
    head = temp;
}

// Function to traverse the array and pass every value of the array to push()
struct Node* createList(int values[], int n)
{
    for (int i = n - 1; i >= 0; i--) {
        push(values[i]);
    }
 
    return head;
}

// Function to print elements of LinkedList
void printList(struct Node *node) {
    printf("LinkedList: ");
    while (node != NULL) {
    printf("%d -> ", node->data);
    // printf("%p ", node->next);
    node = node->next;
    }
    printf("NULL");
}


int main(void)
{
    int values[] = {10, 20, 30};
    int n = sizeof(values)/sizeof(values[0]);
 
    createList(values, n);
    printList(head);
}
