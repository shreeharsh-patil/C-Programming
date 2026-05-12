#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePtr;
    char buffer[255];

    printf("--- C File Opening & Closing Experiment ---\n");

    // 1. Open File for writing
    filePtr = fopen("experiment_data.txt", "w");
    if (filePtr == NULL) {
        perror("Error creating file");
        return EXIT_FAILURE;
    }
    
    printf("[SUCCESS] File 'experiment_data.txt' opened for writing.\n");
    fprintf(filePtr, "This is an experimental log file.\n");
    fprintf(filePtr, "Successfully opened and written to the file stream!\n");
    
    // 2. Close the file stream correctly
    fclose(filePtr);
    printf("[SUCCESS] File stream flushed and CLOSED properly.\n");

    printf("\n--- Now attempting to READ the data ---\n");
    
    // 3. Open file for reading
    filePtr = fopen("experiment_data.txt", "r");
    if (filePtr == NULL) {
        perror("Error reading file");
        return EXIT_FAILURE;
    }

    printf("[SUCCESS] File opened for reading. Content:\n");
    printf(">> ----------------------------------------\n");
    
    // Print lines until end of file
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf(">> %s", buffer);
    }
    printf("\n>> ----------------------------------------\n");

    // 4. Closing reading stream
    fclose(filePtr);
    printf("[SUCCESS] Read operation completed. Final close executed.\n");

    return EXIT_SUCCESS;
}
