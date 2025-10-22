#include <stdio.h>
#include <stdlib.h>

int main() {

    int year;
    int scan_result; 

    printf("Enter a year: ");
    scan_result = scanf("%d", &year);

    if (scan_result == 1) {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    } else {
        printf("Error: Invalid input. Please enter a valid integer for the year.\n");
    }
