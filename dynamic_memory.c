#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Memory allocation using malloc
    ptr = (int*) malloc(n * sizeof(int));

    // Check if memory has been successfully allocated
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", ptr + i);
            sum += *(ptr + i);
        }

        // Print the elements
        printf("\nThe elements are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        
        printf("\nThe sum is: %d\n", sum);

        // Free the allocated memory
        free(ptr);
        printf("Memory successfully deallocated.\n");
    }

    return 0;
}
