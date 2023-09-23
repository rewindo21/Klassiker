// Linked list implementation
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to create a linked list of given array
struct Node* createNode(int data, struct Node *next) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = next;
    return node
}

// Function to print elements of linked list
void printLinkedlist(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

