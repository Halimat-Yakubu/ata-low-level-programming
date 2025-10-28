
#include <stdio.h>

int calculate_power(int base, int exponent);

int main() {
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    result = calculate_power(base, exponent);

    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}


int calculate_power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;  
    }

    return result;
}
