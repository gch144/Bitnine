#include <stdio.h>
#include <stdlib.h>

// Recursive implementation
int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return recursiveF(n - 3) + recursiveF(n - 2);
}

// Memoization with recursion
#define MAX_SIZE 1000
int memo[MAX_SIZE];

int memoizationF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo[n] != -1) return memo[n];
    memo[n] = memoizationF(n - 3) + memoizationF(n - 2);
    return memo[n];
}

// Iterative implementation
int iterativeF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 0, b = 1, c = 2, i;
    for (i = 3; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input: n should be non-negative.\n");
        return 0;
    }

    // Recursive implementation
    printf("Recursive: F(%d) = %d\n", n, recursiveF(n));

    // Memoization with recursion
    for (int i = 0; i < MAX_SIZE; i++) {
        memo[i] = -1;
    }
    printf("Memoization: F(%d) = %d\n", n, memoizationF(n));

    // Iterative implementation
    printf("Iterative: F(%d) = %d\n", n, iterativeF(n));

    return 0;
}
