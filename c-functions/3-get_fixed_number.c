#include <stdio.h>

int get_fixed_number(void);

int main() {
    int number;

    number = get_fixed_number();

    printf("Fixed number is: %d\n", number);

    return 0;
}


int get_fixed_number(void) {
    return 100;
}
