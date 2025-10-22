#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    const char* result_message;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    result_message = (number > 0) ? "Positive" : "Non-positive";
    printf("%d is a positive number.%s\n", number, result_message);

    return 0;
}
