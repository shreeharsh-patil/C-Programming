#include <stdio.h>

int main()
{
    char mystring[100];
    FILE *fptr;
    
    fptr = fopen("filename.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fptr, "Hello world in the file.\n");
    fprintf(fptr, "File created successfully.\n");
    fclose(fptr);
    
    fptr = fopen("filename.txt", "a");
    if (fptr != NULL) {
        fprintf(fptr, "Additional text append.\n");
        fclose(fptr);
    }
    
    fptr = fopen("filename.txt", "r");
    if (fptr != NULL) {
        printf("Content read from file:\n");
        while (fgets(mystring, 100, fptr))
        {
            printf("%s", mystring);
        }
        fclose(fptr);
    }
    return 0;
}
