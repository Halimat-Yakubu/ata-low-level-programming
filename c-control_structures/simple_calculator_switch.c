#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("--- Simple Calculator ---\n");
    printf("Enter an expression (e.g., 10 + 5 or 20.5 * 3): ");

    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Error: Invalid input format. Please enter two numbers and one operator (e.g., 10 + 5).\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
            break;
        default:
            printf("Error: Invalid operator '%c'. Supported operators are +, -, *, /.\n", op);
            return 1;
    }

    return 0;
}
