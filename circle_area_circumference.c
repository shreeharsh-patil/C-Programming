#include <stdio.h>

int main()
{
    float r, area, circumference;
    printf("Enter the radius: ");
    scanf("%f", &r);
    circumference = 2 * 3.14159 * r;
    area = 3.14159 * r * r;
    printf("Circumference is %f\n", circumference);
    printf("Area is %f\n", area);
    return 0;
}
