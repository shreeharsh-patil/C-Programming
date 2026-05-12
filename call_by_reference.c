#include <stdio.h>

void swap(int *, int *);

int main()
{
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    printf("Original values: %d %d\n", x, y);
    swap(&x, &y);
    printf("The swapped value in main is %d %d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The values inside swap function: %d %d\n", *a, *b);
}
