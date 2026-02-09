#include <stdio.h>

// Recursive function to calculate power
int powerResult(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * powerResult(base, exp - 1);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Answer = %d", powerResult(a, b));

    return 0;
}