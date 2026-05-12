#include <stdio.h>

int rev(int *n);

int main()
{
    int a;
    int r;
    printf("Enter the number to be reversed: ");
    scanf("%d", &a);
    r = rev(&a);
    printf("The reversed number is %d\n", r);
    return 0;
}

int rev(int *n)
{
    int reverse = 0, rem = 0;
    int temp = *n;
    while (temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    return reverse;
}
