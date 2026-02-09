#include <stdio.h>

// Function to find Fibonacci number
int fibonacciValue(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacciValue(n - 1) + fibonacciValue(n - 2);
}

int main()
{
    int n;

    printf("Enter position: ");
    scanf("%d", &n);

    printf("Fibonacci number is %d", fibonacciValue(n));

    return 0;
}