#include <stdio.h>

int main() {
    int num1;
    int num2;

    // Input Prompts
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Results
    printf("Sum: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Difference: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Product: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // Check for division by zero before calculating quotient and remainder
    if (num2 != 0) {
        printf("Quotient: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Remainder: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Cannot perform division or modulus by zero.\n");
    }

    return 0;
}
