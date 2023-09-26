// LinkedList implementation
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
struct Node* head = NULL;


// Function to insert node at start of LinkedList
void insert_begin()
{
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter node data: ");
	scanf("%d",&temp->data);

	temp->next = NULL;
	if(head==NULL)  // if List is empty
	{
		head = temp;
		return;
	}
	else
	{
		temp->next = head;  // point it to old head node
		head = temp;        // point head to new first node
	}
}

// Function to insert node at end of LinkedList
void insert_end()
{
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter node data: ");
	scanf("%d",&temp->data); 

	temp->next = NULL;
	if(head == NULL)  // if List is empty
	{
		head = temp;
	        return;
	}
	else
    {
		struct Node* ptr = head;  
		while(ptr->next != NULL)    // traverse till last but one node
		{
			ptr = ptr->next;
		}

		ptr->next = temp;   // tail node pointing to new node
	}
}

// Function to insert node at given position
void insert_pos()
{
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter node data: ");
	scanf("%d",&temp->data);

	temp->next = NULL;
	if(head == NULL)  // if List is empty
	{
		head = temp;
	        return;
	}
	else
	{
		struct Node* prev_ptr;
		struct Node* ptr = head;
		int pos;

		printf("Enter position: ");
		scanf("%d",&pos);

		for(int i = 0; i < pos; i++)    // traverse till given position
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
                
		temp->next = ptr;       // new node pointing to node in that pos
		prev_ptr->next = temp;  // prevptr pointing to new node
	}
}

// Function to delete first node of LinkedList
void delete_begin()
{ 
	if(head == NULL)  // if List is empty
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else
	{
		struct Node* ptr = head; 
		head = head->next;  // head node pointing to second node
		free(ptr);          // deleting prev head node
		printf("Node Deleted \n");
	}
}

// Function to delete last node of LinkedList
void delete_end()
{
	if(head == NULL) // if List is empty
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else if(head->next==NULL) 
	{
		struct Node* ptr = head;
		head = ptr->next;
		free(ptr);
	}
	else
	{
		struct Node* ptr = head;
		struct Node* prev_ptr = NULL;
		while(ptr->next != NULL)  // traverse till last but one node
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = NULL;  // next field of last but one field is made as NULL
		free(ptr);              // deleting last node
	}	
}

// Function to delete node at given position
void delete_pos()
{
	int pos;
	printf("Enter node position to delete: ");
	scanf("%d",&pos);
    
	struct Node* ptr = head;                                                                               
	if(head == NULL)    // if List is empty
	{
		printf("Linked List is empty \n"); 
		return;
	}
	else if(pos == 0) 
	{
		ptr = head;
		head = ptr->next;   // head pointing to second node
		free(ptr);          // deleting old first node
	}
	else
	{
		struct Node* prev_ptr;
		for(int i = 0; i < pos; i++)    // traverse till given position
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = ptr->next;     // prev node pointing to pos+1 node
		free(ptr);                      // deleting node at pos
	}
}

// Function to print the entire LinkedList
void printList()
{
	if(head == NULL)  // if List is empty
	{
		printf("Linked List is Empty\n");
		return;
	}
    printf("LinkedList: ");
	struct Node* ptr = head;
	while(ptr != NULL)    // traverse till last but one node
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}

// Driver program
int main()
{
	int choice;
	while(1)
	{
	    printf("\n*****\n");
	    printf("0. To exit\n");
	    printf("1. Insert Node at beginning\n");
	    printf("2. Insert Node at specific position\n");
	    printf("3. Insert Node at the end of LinkedList\n");
	    printf("4. Delete Node at beginning\n");
	    printf("5. Delete Node at the end of LinkedList\n");
	    printf("6. Delete Node at specific position\n");
	    printf("7. Print list\n");
	    printf("*****\n");

		printf("\n Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: insert_begin();
					break;
			case 2: insert_pos();
					break;
			case 3: insert_end();
					break;
			case 4: delete_begin();
					break;
			case 5: delete_end();
					break;
			case 6: delete_pos();
					break;
            case 7: printList();
					break;
			case 0: exit(0);
			default:printf("\n Wrong Choice");
                    break;
		}
	}
}