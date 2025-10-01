#include <stdio.h>

int main() {
    int num1; 
    int num2; 
    int sum;

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Result: %d", sum);

    return 0;
}
