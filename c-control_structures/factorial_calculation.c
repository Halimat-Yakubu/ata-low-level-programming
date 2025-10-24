#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; 
    int i; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 


    i = num; 
    while (i > 0) {
        factorial = factorial * i; 
        i--; 
    }

    printf("Factorial of %d is: %lld.\n", num, factorial);

    return 0;
}
