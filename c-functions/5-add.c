
#include <stdio.h>

int add(int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("Result of addition: %d\n", result);

    return 0;
}


int add(int a, int b) {
    return a + b;
}

