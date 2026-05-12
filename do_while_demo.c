#include <stdio.h>

int main()
{
    int i = 1;
    printf("Example of a do-while loop:\n");
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
