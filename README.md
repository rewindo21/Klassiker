# Klassiker

## Types of Data Structure

| Linear data structure      | Non-linear data structure |
| ----------- | ----------- |
| The data items are arranged in sequential order, one after the other.      | The data items are arranged in non-sequential order (hierarchical manner).       |
| All the items are present on the single layer.   | The data items are present at different layers.        |
| It can be traversed on a single run. That is, if we start from the first element, we can traverse all the elements sequentially in a single pass.   | It requires multiple runs. That is, if we start from the first element it might not be possible to traverse all the elements in a single pass.        |
| The memory utilization is not efficient.   | Different structures utilize memory in different efficient ways depending on the need.        |
| The time complexity increase with the data size.   | Time complexity remains the same.        |
| Example: Arrays, Stack, Queue, Linked List   | Example: Tree, Graph        |


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
