#include<stdio.h>
int main()
{
    double a,b,result;
    char operation;
    
    printf("Simple Calculator\n");
    printf("Enter first number:");
    scanf("%lf",&a);

    printf("select operation(+,-,*,/):");
    scanf(" %c",&operation);

    printf("Enter second number:");
    scanf("%lf",&b);

    switch(operation) {
        case '+':
            printf("Addition: %lf\n", a + b);
            break;
        case '-':
            printf("Subtraction: %lf\n", a - b);
            break;
        case '*':
            printf("Multiplication: %lf\n", a * b);
            break;
        case '/':
            printf("Division: %lf\n", a / b);
            if (b == 0 && operation == '/') {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    return 0;
}