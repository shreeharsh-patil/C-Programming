#include <stdio.h>

int add(int *x, int *y);

int main()
{
    int a, b, sum;
    printf("Enter 2 numbers to be added: ");
    scanf("%d %d", &a, &b);
    sum = add(&a, &b);
    printf("Sum = %d\n", sum);
    return 0;
}

int add(int *x, int *y)
{
    return *x + *y;
}
