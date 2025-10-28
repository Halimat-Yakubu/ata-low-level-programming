#include <stdio.h>

void print_sum(int a, int b);

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    print_sum(num1, num2);

    return 0;
}

void print_sum(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", a, b, sum);
}

