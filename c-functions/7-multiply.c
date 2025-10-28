
#include <stdio.h>

int multiply (int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = multiply (num1, num2);

    printf("Result of multiplication: %d\n, result);

    return 0;
}


int multiply (int a, int b) {
    return a * b;
}
