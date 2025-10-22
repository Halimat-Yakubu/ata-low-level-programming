#include <stdio.h>

int main() {
    long long n; 
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

   
    if (n < 0) {
        n = -n;
    }

 
    do {
        n /= 10;
        count++;
    } while (n != 0); 

    printf("Number of digits: %d\n", count);

    return 0;
}
