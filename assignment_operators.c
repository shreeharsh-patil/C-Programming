#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    int temp = a;
    printf("a = b evaluates to: %d\n", (a = b));
    a = temp; // reset a
    printf("a += b evaluates to: %d\n", (a += b));
    a = temp;
    printf("a -= b evaluates to: %d\n", (a -= b));
    a = temp;
    printf("a *= b evaluates to: %d\n", (a *= b));
    a = temp;
    
    if (b != 0) {
        printf("a /= b evaluates to: %d\n", (a /= b));
        a = temp;
        printf("a %%= b evaluates to: %d\n", (a %= b));
        a = temp;
    } else {
        printf("Skipping division ops since b=0.\n");
    }

    printf("a <<= b evaluates to: %d\n", (a <<= b));
    a = temp;
    printf("a >>= b evaluates to: %d\n", (a >>= b));
    a = temp;
    printf("a &= b evaluates to: %d\n", (a &= b));
    a = temp;
    printf("a |= b evaluates to: %d\n", (a |= b));
    a = temp;
    printf("a ^= b evaluates to: %d\n", (a ^= b));
    a = temp;

    return 0;
}
