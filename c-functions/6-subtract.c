#include <stdio.h>

int subtract (int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = subtract(num1, num2);

    printf("Result of subtraction: %d\n", result);

    return 0;
}


int subtract (int a, int b) {
    return a - b;
}
