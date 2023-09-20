# Klassiker

Implementation of data structures using C language. What in the world is more classic than this?

# Table of Contents
- [Why Learn DSA?](#question)
- [Types of Data Structure](#types)
- [Asymptotic Analysis](#asymp)
- [Stack](#stack)
- [Queue](#queue)

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
