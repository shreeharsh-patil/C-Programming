#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18) ? printf("You can drink.\n") : printf("You cannot drink.\n");
    return 0;
}
