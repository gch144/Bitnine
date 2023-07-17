## For run and implemation of all method download Program2.c
# Recurrence Relation Implementation

This program implements a piecewise recurrence relation in three different ways: recursive, memoization with recursion, and iterative. The recurrence relation is defined as follows:

F(n) = F(n-3) + F(n-2)

## Problem Statement

Given a non-negative integer n, the program calculates the value of F(n) based on the recurrence relation. The initial conditions for the recurrence relation are:
F(0) = 0
F(1) = 1
F(2) = 2

## Implementation

The program provides three implementations of the recurrence relation:

1. **Recursive Implementation**: The function `recursiveF` implements the recurrence relation using recursive calls. It directly follows the definition of the recurrence relation and provides a straightforward solution. However, it is inefficient for large values of n due to repeated function calls and has exponential time complexity.
**Advantages:**
- It directly follows the definition of the recurrence relation.
- Easy to understand and implement.
- Provides a straightforward solution.

**Disadvantages:**
- Inefficient for large values of n due to repeated recursive function calls.
- Exponential time complexity, as it recomputes the same values multiple times.

2. **Memoization with Recursion**: The function `memoizationF` improves the performance by using memoization. It stores the previously computed values in an array to avoid redundant computations. This reduces the time complexity and makes it more efficient for larger values of n. However, it requires additional memory to store the memoization array.
**Advantages:**
- Improves the performance compared to the basic recursive approach by storing previously computed values.
- Avoids redundant computations and reduces time complexity.
- More efficient for larger values of n.

**Disadvantages:**
- Requires additional memory to store the memoization array.
- The maximum size of the memoization array needs to be defined in advance.

3. **Iterative Implementation**: The function `iterativeF` implements the recurrence relation using an iterative approach. It avoids recursion and eliminates the overhead of function calls. This approach is efficient and has linear time complexity. It is suitable for large values of n. However, it does not utilize memoization and recomputes the values in each iteration.
**Advantages:**
- Avoids recursion, eliminating the overhead of function calls.
- Efficient and has linear time complexity.
- Suitable for large values of n.

**Disadvantages:**
- Does not take advantage of memoization, so it recomputes values in each iteration.
- The iterative approach might be slightly less intuitive for some people compared to the recursive version.




## Usage



1. Compile the program using a C compiler:

   ```shell
   gcc Program2.c -o recurrence
   ```

3. Run the compiled program:

   ```shell
   ./recurrence
   ```

4. Enter a non-negative integer value for `n` when prompted.

5. The program will calculate and display the values of F(n) using all three implementations: recursive, memoization, and iterative.

## Example

Input:
```
Enter the value of n: 10
```

Output:
```
Recursive: F(10) = 43
Memoization: F(10) = 43
Iterative: F(10) = 43
```

## Notes

- The program handles negative input values by displaying an error message and exiting. Only non-negative values of `n` are valid.

- The program uses a defined constant `MAX_SIZE` to determine the size of the memoization array. Modify this constant as needed to accommodate larger values of `n`.

- Feel free to modify the program to suit your specific requirements or integrate it into other applications.

```
