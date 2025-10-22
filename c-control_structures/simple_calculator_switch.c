#include <stdio.h>

int main() {
    double num1;
    double num2;
    char op;
    double result;

    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1 &num2);
    
    printf("Enter operator: (+, -, *, /) \n");
    scanf("%c", &op)


    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%lf %c %lf = %lf\n", num1, op, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%lf %c %lf = %lf\n", num1, op, num2, result);
            break;
        case '+':
            result = num1 + num2;
            printf("%lf %c %lf = %lf\n", num1, op, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%lf %c %lf = %lf\n", num1, op, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                 result = num1 / num2;
                 printf("%lf %c %lf = %lf\n", num1, op, num2, result);
               }
                break;
        default:
            printf("Error: Invalid operator '%c'. Supported operators are +, -, *, /.\n", op);
            return 1;
    }

    return 0;
}
