#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    const char* result_message;

    printf("Enter an integer: ");

    if (scanf("%d", &number) <= 0) {
        printf("%d is a non-positive number.\n", number);
    }

    result_message = (number > 0) ? "positive" : "negative";
    printf("%d is a %s number.\n", number, result_message);

    return 0;
}
