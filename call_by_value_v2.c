#include <stdio.h>

void swap(int, int);

int main()
{
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("The value in main remains %d %d\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapped values in function: %d %d\n", a, b);
}
