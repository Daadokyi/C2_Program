#include <stdio.h>

int memo[100]; // Assuming n will be less than or equal to the maximum integer value

int fibonacciMemoization(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != 0) return memo[n];
    
    memo[n] = fibonacciMemoization(n - 3) + fibonacciMemoization(n - 2);
    return memo[n];
}
