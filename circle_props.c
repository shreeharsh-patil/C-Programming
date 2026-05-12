#include <stdio.h>

int main()
{
    float r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = 3.14159 * r * r;
    circumference = 2 * 3.14159 * r;
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
    return 0;
}
