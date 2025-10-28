
#include <stdio.h>

int find_max(int a, int b);

int main() {
    int num1, num2, max;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    max = find_max(num1, num2);

    printf("Maximum number is: %d\n", max);

    return 0;
}

int find_max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
