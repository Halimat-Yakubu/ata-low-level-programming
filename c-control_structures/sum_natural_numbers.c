#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);


    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of natural numbers up to %d is %d.\n", n, sum);
  
    return 0;
}
