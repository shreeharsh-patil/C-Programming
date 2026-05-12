#include <stdio.h>

int main()
{
    float r, p, a;
    printf("Enter the radius: ");
    scanf("%f", &r);
    p = 2 * 3.14159 * r;
    a = 3.14159 * r * r;
    printf("Perimeter: %f\n", p);
    printf("Area: %f\n", a);
    return 0;
}
