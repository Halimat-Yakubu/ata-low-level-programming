#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int i;

    printf("Enter an integer (n): ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
    int result = n * i;

    printf("%d x %d = %d\n", n, i, result);
    }
    return 0;
}
