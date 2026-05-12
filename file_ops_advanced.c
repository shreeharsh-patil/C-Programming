#include <stdio.h>

int main()
{
    char mystring[100];
    FILE *fptr;

    // 1) Write mode (creates or overwrites file)
    fptr = fopen("filename.txt", "w");
    if (fptr == NULL) return 1;
    fprintf(fptr, "Hello from Advanced Ops demo!\n");
    fprintf(fptr, "File rewritten successfully.\n");
    fclose(fptr);

    // 2) Append mode
    fptr = fopen("filename.txt", "a");
    if (fptr == NULL) return 1;
    fprintf(fptr, "Appended text: C Programming.\n");
    fclose(fptr);

    // 3) Read mode
    printf("Reading entire file:\n--------------------\n");
    fptr = fopen("filename.txt", "r");
    if (fptr == NULL) return 1;
    while (fgets(mystring, 100, fptr))
    {
        printf("%s", mystring);
    }
    fclose(fptr);

    return 0;
}
