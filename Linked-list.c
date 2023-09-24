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
    return node;
}

// Function to print elements of linked list
void printLinkedlist(struct Node *node) {
    printf("Linked list: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main(){
    int data[] = {10, 20, 30};
    int n = sizeof(data)/sizeof(data[0]);
    struct Node* head = NULL;
    struct Node* ptr = NULL;
    
    for(int i = n-1; i>=0; i--){
        ptr = createNode(data[i], ptr);
        head = ptr;
    }

    printLinkedlist(head);
}