
#include <stdio.h>

int add(int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter the first integer: \n");
    scanf("%d", &num1);

    printf("Enter the second integer: \n");
    scanf("%d", &num2);

    result = num1 + num2;

    printf("Result of addition: %d\n", result);

    return 0;
}


int add(int a, int b) {
    return a + b;
}

