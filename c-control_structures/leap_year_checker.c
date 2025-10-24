#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    
    if (scanf("%d", &year) != 1) {
        printf("Error: Invalid input. Please enter a numerical year.\n");
    }

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
