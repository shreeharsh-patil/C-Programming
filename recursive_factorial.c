#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int fact, n = 5;
    printf("Calculating factorial of %d using recursion...\n", n);
    fact = factorial(n);
    printf("Result: %d\n", fact);
    return 0;
}
