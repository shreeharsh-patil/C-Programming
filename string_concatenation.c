#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[50];
    printf("Enter first string: ");
    scanf("%49s", s1);
    
    printf("Enter second string to concatenate: ");
    scanf("%49s", s2);

    strcat(s1, s2);
    printf("Concatenated result: %s\n", s1);
    
    return 0;
}
