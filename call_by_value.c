#include <stdio.h>

void swap(int, int);

int main()
{
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("The values in main remain unchanged: %d %d\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The swapped value inside swap function is %d %d\n", a, b);
}
