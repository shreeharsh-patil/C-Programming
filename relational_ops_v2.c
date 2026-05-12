#include <stdio.h>

int main()
{
    int x = 5, y = 10;
    printf("Evaluating comparisons between %d and %d:\n", x, y);
    printf("%d == %d is %d\n", x, y, x == y);
    printf("%d != %d is %d\n", x, y, x != y);
    printf("%d >= %d is %d\n", x, y, x >= y);
    printf("%d <= %d is %d\n", x, y, x <= y);
    printf("%d > %d is %d\n", x, y, x > y);
    printf("%d < %d is %d\n", x, y, x < y);
    return 0;
}
