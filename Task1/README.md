# Backend
# Question 1:

## Arithmetic Operations and Fibonacci Sequence

This program demonstrates the use of arithmetic operations and dynamic programming to compute the Fibonacci sequence.

## Development Environment

This program was developed using the C programming language and was tested on a Windows 10 machine using the following tools:

- GCC (GNU Compiler Collection) version 11.1.0
- Visual Studio Code version 1.60.2

## How to Compile and Run

To compile the program, open a terminal window or command prompt and navigate to the directory containing the source code. Then, type the following command:

```
gcc -o program Problem1.c
```

This will compile the source code and generate an executable file called `program`. To run the program, type the following command:

```
./program
```

This will execute the program and display the results of the arithmetic operations and the Fibonacci sequence.

## How to Use

The program defines a `Node` struct and a `TypeTag` enum to represent arithmetic operations and the Fibonacci sequence. It also defines functions to create `Node` objects, calculate the Fibonacci sequence using dynamic programming, and perform operations on `Node` objects. 
- The code defines an enumeration TypeTag that represents different types of operations.
- The Node structure represents a node in the expression tree and contains members for the type of the operation and the values associated with the node.
- The makeFunc function is used to create a new node with the specified type and values.
- The fibonacci function calculates the Fibonacci series using dynamic programming and handles positive and negative numbers.
- The calc function performs the specified operations based on the node type and returns the result.
- The main function creates nodes representing expressions, computes their values, and prints the results.
- The free function is used to release the dynamically allocated memory for the nodes.

Note: The program demonstrates the functionality of negative numbers in the Fibonacci series by running it with different inputs.

To use the program, you can modify the `main` function to create `Node` objects for different arithmetic operations and call the `calc` function to perform the operations and display the results. You can also modify the `fibonacci` function to compute the 

## Example Output

```
add : 16
mul : 20
sub : 4
fibo: 3

 Code for checking negative number of sub in fibo
add : 16
mul : 12
sub : -4
fibo : -3
```

This output shows the results of performing an addition (`add`) operation on the numbers 10 and 6, a multiplication (`mul`) operation on the numbers 5 and 4, and a subtraction (`sub`) operation on the results of the `add` and `mul` operations. It also shows the result of computing the Fibonacci sequence using the `sub` result as the input (`fibo`). The second set of output shows the result of performing the same operations with different input values, including a negative result for the `sub` operation and the resulting positive Fibonacci number.
