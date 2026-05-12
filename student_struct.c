#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
} s[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        s[i].rollno = i + 1;
        printf("Enter name for student with rollno %d: ", s[i].rollno);
        scanf("%49s", s[i].name);

        printf("Enter marks for %s: ", s[i].name);
        scanf("%f", &s[i].marks);
    }

    printf("\nROLLNO  NAME         MARKS\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%-8d%-13s%0.2f\n", s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}
