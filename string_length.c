#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    // Clear stdin buffer if any, then get line
    fgets(s, sizeof(s), stdin);
    
    // Strip trailing newline if present
    s[strcspn(s, "\n")] = 0;

    printf("The string is: \"%s\"\n", s);
    printf("Length of string is: %zu\n", strlen(s));
    return 0;
}
