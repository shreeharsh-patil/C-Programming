#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("--- Simple Calculator Demo ---\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice leading space to consume any dangling whitespace

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error! Operator is not correct.\n");
    }

    return 0;
}
