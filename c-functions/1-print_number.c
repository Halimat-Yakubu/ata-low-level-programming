#include <stdio.h>

void print_number(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    print_number(number);

    return 0;
}

void print_number(int num) {
    printf("The number is: %d\n", num);
}

