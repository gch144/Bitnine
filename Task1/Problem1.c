#include <stdio.h>
#include <stdlib.h>


typedef enum TypeTag {
    ADD,
    MUL,
    SUB,
    FIBO
} TypeTag;

typedef struct Node {
    TypeTag type;
    int a, b;
} Node;

// Function to create a Node
Node* makeFunc(TypeTag type, int a, int b) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->type = type;
    node->a = a;
    node->b = b;
    return node;
}

// Function to calculate Fibonacci series using Dynamic Programming
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n < 0) {
        n = -n; // Make n positive

        // Flip the sign based on the parity of n because if n is even so f_-n = -f_n ( F(-n) = ((-1)^(n-1)) * F(n))
        return (n % 2 == 0) ? -fibonacci(n) : fibonacci(n);
    }

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}

// Function to perform operations
int calc(Node* node) {
    switch(node->type) {
        case ADD: 
            return node->a + node->b;
        case MUL: 
            return node->a * node->b;
        case SUB: 
            return node->a - node->b;
        case FIBO: 
            return fibonacci(node->a);
        default: 
            return -1;
    }
}

int main() {
    Node *add = makeFunc(ADD, 10, 6);
    Node *mul = makeFunc(MUL, 5, 4);
    Node *sub = makeFunc(SUB, calc(mul), calc(add));
    Node *fibo = makeFunc(FIBO, calc(sub), 0);

    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo: %d\n", calc(fibo));

    free(add);
    free(mul);
    free(sub);
    free(fibo);

    printf("\n Code for checking negative number of sub in fibo \n");

    add = makeFunc(ADD, 10, 6);
    mul = makeFunc(MUL, 3, 4);
    sub = makeFunc(SUB, calc(mul), calc(add));
    fibo = makeFunc(FIBO, calc(sub), 0);

    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo: %d\n", calc(fibo));

    free(add);
    free(mul);
    free(sub);
    free(fibo);


    return 0;
}