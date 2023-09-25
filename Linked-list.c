// Linked list implementation
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


// Function to create a node
void push(struct Node** headRef, int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 
    temp->data = data;
    temp->next = *headRef;
 
    *headRef = temp;
}


// Function to traverse the array and pass every value of the array to push()
struct Node* createList(int values[], int n)
{
	struct Node* head = NULL;
	 	
    for (int i = n - 1; i >= 0; i--) {
        push(&head, values[i]);
    }
 
    return head;
}


// Function to print elements of linked list
void printList(struct Node *node) {
    printf("Linked list: ");
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
 
    struct Node* head = createList(values, n);
 
    printList(head);
}
