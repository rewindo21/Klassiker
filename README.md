# Klassiker

Implementation of data structures using C language. What in the world is more classic than this?

# Table of Contents
- [Why Learn DSA?](#question)
- [Types of Data Structure](#types)
- [Asymptotic Analysis](#asymp)
- [Stack](#stack)
- [Queue](#queue)
- [Linked list](#linked-list)

<a id="question"></a>
## Why Learn DSA?

- Write optimized and scalable code - Once you have knowledge about different data structures and algorithms, you can determine which data structure and algorithm to choose in various conditions.
- Effective use of time and memory - Having knowledge about data structures and algorithms will help you write codes that run faster and require less storage.
- Better job opportunities - Data structures and algorithms questions are frequently asked in job interviews of various organizations including Google, Facebook, and so on.

<a id="types"></a>
## Types of Data Structure

| Linear data structure      | Non-linear data structure |
| ----------- | ----------- |
| The data items are arranged in sequential order, one after the other.      | The data items are arranged in non-sequential order (hierarchical manner).       |
| All the items are present on the single layer.   | The data items are present at different layers.        |
| It can be traversed on a single run. That is, if we start from the first element, we can traverse all the elements sequentially in a single pass.   | It requires multiple runs. That is, if we start from the first element it might not be possible to traverse all the elements in a single pass.        |
| The memory utilization is not efficient.   | Different structures utilize memory in different efficient ways depending on the need.        |
| The time complexity increase with the data size.   | Time complexity remains the same.        |
| Example: Arrays, Stack, Queue, Linked List   | Example: Tree, Graph        |


<a id="asymp"></a>
## Asymptotic Analysis

The efficiency of an algorithm depends on the amount of time complexity and storage complexity of the algorithm.

An algorithm may not have the same performance for different types of inputs. With the increase in the input size, the performance will change.

The study of change in performance of the algorithm with the change in the order of the input size is defined as asymptotic analysis.

### Asymptotic Notations

Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value.

There are mainly three asymptotic notations:

- O notation: Big-O notation represents the upper bound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm. (a)
- Ω notation: Omega notation represents the lower bound of the running time of an algorithm. Thus, it provides the best case complexity of an algorithm. (b)
- Θ notation: Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm. (c)

![charts](./src/charts.jpeg)

### Comparing Time Complexity

1 < logn < sqrtn < n < nlogn < n^2 < n^3 < 2^n < 3^n < n^n


<a id="stack"></a>
## Stack
A stack is a linear data structure that follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first. You can think of the stack data structure as the pile of plates on top of another.
![stack](src/stack.jpeg)
See the code [here](Stack.c)

### Stack Time Complexity

For the array-based implementation of a stack, the push and pop operations take constant time, i.e. O(1).

### Applications of Stack Data Structure

- To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
- In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
- In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.

<a id="queue"></a>
## Queue
A Queue is a linear data structure that follows the principle of First In First Out (FIFO). This means the first element inserted inside the stack is removed first. You can think of the stack data structure as the ticket queue outside a cinema hall, where the first person entering the queue is the first person who gets the ticket.
![stack](src/queue.jpeg)
See the code [here](Queue.c)

### Queue Time Complexity

For the array-based implementation of a queue, the enqueue and dequeue operations take constant time, i.e. O(1).

### Applications of Queue Data Structure

- CPU scheduling, Disk Scheduling
- When data is transferred asynchronously between two processes.The queue is used for synchronization. For example: IO Buffers, pipes, file IO, etc
- Handling of interrupts in real-time systems.
- Call Center phone systems use Queues to hold people calling them in order.

<a id="linked-list"></a>
## Linked list
A linked list is a linear data structure that includes a series of connected nodes. A node in a linked list typically consists of two components:
- Data: It holds the actual value or data associated with the node.
- Next Pointer: It stores the memory address (reference) of the next node in the sequence.

Head and Tail: The linked list is accessed through the head node, which points to the first node in the list. The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.

### Array vs Linked List
![LinkedList](src/array-linked-list.png)

| Array | Linked List |
| ----------- | ----------- |
| Arrays are stored in contiguous location | Linked lists are not stored in contiguous location. |
| Fixed in size. | Dynamic in size. |
| Memory is allocated at compile time. | Memory is allocated at run time. |
| Uses less memory than linked lists. |  Uses more memory because it stores both data and the address of next node. |
|  Elements can be accessed easily. | Element accessing requires the traversal of whole linked list. |
| Insertion and deletion operation takes time. | Insertion and deletion operation is faster. |


### Types of linked lists
- Single-linked list: In a singly linked list, each node contains a reference to the next node in the sequence. Traversing a singly linked list is done in a forward direction.
- Double linked list: In a doubly linked list, each node contains references to both the next and previous nodes. This allows for traversal in both forward and backward directions, but it requires additional memory for the backward reference.
- Circular linked list:  In a circular linked list, the last node points back to the head node, creating a circular structure. It can be either singly or doubly linked.
  
Simple linked list implementation [->](Linked-List.c)

Linked list implementation with operations [->](Operation-Linked-List.c)

### Linked List Time Complexity
|  | Array | Linked List |
| ----------- | ----------- | ----------- |
| Cost of accessing elements | O(1) | O(n) |
| Insert/Remove from beginning | O(n) | O(1) |
| Insert/Remove from end | O(1) | O(n) |
| Insert/Remove from mid | O(n) | O(n) |


### Applications of Linked List
- Dynamic memory allocation
- Implemented in stack and queue
- In undo functionality of softwares
- Hash tables, Graphs


<a id="hash"></a>
## Hash Table
The Hash table data structure stores elements in key-value pairs where

- Key- unique integer that is used for indexing the values
- Value - data that are associated with keys.

Hash tables are named Object in JavaScript, Dictionary in Python, and Map in Java, Scala, and Go.

Hashing (Hash Function): In a hash table, a new index is processed using the keys. And, the element corresponding to that key is stored in the index. This process is called hashing.

![Hash](src/hash-table.png)
See the code [here]()

### Applications of Linked List
Hash tables are implemented where
- constant time lookup and insertion is required
- cryptographic applications
- indexing data is required