
#include <stdio.h>

void print_message_n_times(int n);

void print_message_n_times(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello from function!\n");
    }
}

int main() {
    int number;

    printf("Enter the number of times to print the message: ");
    scanf("%d", &number);

    print_message_n_times(number);

    return 0;
}
