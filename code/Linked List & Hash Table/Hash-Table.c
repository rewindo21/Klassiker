// Implementing hash table
#include <stdio.h>
#include <stdlib.h>

struct set
{
  int key;
  int data;
};

struct set *array;
int capacity = 10;
int current_size = 0;

// Function to calculate the hash index for a given key
int hashFunction(int key)
{
    return (key % capacity);
}

// These functions are used to obtain a prime number greater than or equal to the specified capacity
// Prime numbers are often chosen as capacities for hash tables to minimize collisions.
int checkPrime(int n)
{
    int i;
    if (n == 1 || n == 0)
    {
    return 0;
    }
    for (i = 2; i < n / 2; i++)
    {
    if (n % i == 0)
    {
        return 0;
    }
    }
    return 1;
}

int getPrime(int n)
{
    if (n % 2 == 0)
    {
    n++;
    }
    while (!checkPrime(n))
    {
    n += 2;
    }
    return n;
}

// Function to initialize the hash table
void initArray()
{
    capacity = getPrime(capacity);
    array = (struct set *)malloc(capacity * sizeof(struct set));
    for (int i = 0; i < capacity; i++)    // initialize all elements to have a key and data of 0
    {
    array[i].key = 0;
    array[i].data = 0;
    }
}

// Function to add an item to the hash table
void insertItem(int key, int data)
{
    int index = hashFunction(key);
    if (array[index].data == 0)         // If the slot is empty, it inserts the key and data
    {
    array[index].key = key;
    array[index].data = data;
    current_size++;
    printf("\n Key (%d) has been inserted \n", key);
    }
    else if (array[index].key == key)   // If the slot contains data, it updates the data
    {
    array[index].data = data;
    }
    else
    {
    printf("\n Collision occured  \n");
    }
}

// Function to remove an item from hash table
void removeItem(int key)
{
    int index = hashFunction(key);
    if (array[index].data == 0) // If the slot is empty,
    {
    printf("\n This key does not exist \n");
    }
    else                        // If the slot contains data, it sets both the key and data to 0
    {
    array[index].key = 0;
    array[index].data = 0;
    current_size--;
    printf("\n Key (%d) has been removed \n", key);
    }
}

// Function to print elements of hash table
void printHashTable()
{
    for (int i = 0; i < capacity; i++)
    {
    if (array[i].data == 0)
    {
        printf("\n array[%d]: / ", i);
    }
    else
    {
        printf("\n key: %d array[%d]: %d \t", array[i].key, i, array[i].data);
    }
    }
}

// Driver program
int main()
{
  int choice, key, data, n;
  initArray();

  	while(1)
	{
	    printf("\n*****\n");
	    printf("0. To exit\n");
	    printf("1. Insert item in the Hash Table\n");
	    printf("2. Remove item from the Hash Table\n");
	    printf("3. Print all items of the Hash Table\n");
	    printf("*****\n");

		printf("\n Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: 
                printf("Enter key -:\t");
                scanf("%d", &key);
                printf("Enter data -:\t");
                scanf("%d", &data);
                insertItem(key, data);
				break;
			case 2: 
                printf("Enter the key to delete-:");
                scanf("%d", &key);
                removeItem(key);
            	break;
			case 3:
                printHashTable();
				break;
			case 0: 
                exit(0);
			default:
                printf("\n Wrong Choice");
                break;
		}

    }
}