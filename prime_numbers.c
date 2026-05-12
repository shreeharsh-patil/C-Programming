#include <stdio.h>

int main()
{
    int a = 1, i, count;
    printf("Listing prime numbers up to 100:\n");
    while (a < 100)
    {
        count = 0;
        i = 2;
        while (i <= a / 2)
        {
            if (a % i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        if (count == 0 && a != 1)
        {
            printf("%d ", a);
        }
        a++;
    }
    printf("\n");
    return 0;
}
