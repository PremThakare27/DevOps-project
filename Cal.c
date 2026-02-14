#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Simple Calculator (Integers Only)\n");
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);   // space before %c to avoid input issues

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch(operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;

        case '-':
            printf("Result: %d\n", num1 - num2);
            break;

        case '*':
            printf("Result: %d\n", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case '%':
            if(num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Modulo by zero is not allowed.\n");
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}