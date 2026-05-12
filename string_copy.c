#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50];
    printf("Enter a string to copy: ");
    scanf("%49s", s1);
    
    strcpy(s2, s1);
    printf("Copied string stored in s2: %s\n", s2);
    return 0;
}
