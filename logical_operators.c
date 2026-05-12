#include <stdio.h>

int main()
{
    int x = 45, y = 6;
    printf("Initial values: x = %d, y = %d\n", x, y);
    printf("Logical AND (x && y) is %d\n", (x && y));
    printf("Logical NOT-AND (!(x && y)) is %d\n", !(x && y));
    printf("Logical OR (x || y) is %d\n", (x || y));
    printf("Logical NOT-OR (!(x || y)) is %d\n", !(x || y));
    return 0;
}
