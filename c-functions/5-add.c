
#include <stdio.h>

int add(int a, int b);

int main() {
    int a, b, result;

    printf("Enter the first integer: \n");
    scanf("%d", &a);

    printf("Enter the second integer: \n");
    scanf("%d", &b);

    result = add(int a, int b);

    printf("Result of addition: %d\n", result);

    return 0;
}


int add(int a, int b) {
    return a + b;
}

