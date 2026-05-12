#include <stdio.h>

int fact(int x);

int main()
{
    int n;
    printf("ENTER THE VALUE OF N: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}

int fact(int x)
{
    if (x <= 1)
        return 1;
    else
        return (x * fact(x - 1));
}
