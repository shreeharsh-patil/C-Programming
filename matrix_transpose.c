#include <stdio.h>

#define MAX 10

int main()
{
    int matrix[MAX][MAX], transpose[MAX][MAX];
    int r, c, i, j;
    
    printf("Enter the number of rows and columns (Max 10): ");
    scanf("%d %d", &r, &c);
    
    if (r > MAX || c > MAX) {
        printf("Size exceeds MAX system constraints.\n");
        return 1;
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Performing transpose
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c; i++) // Rows now represent original columns count
    {
        for (j = 0; j < r; j++) // Cols represent original rows
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
