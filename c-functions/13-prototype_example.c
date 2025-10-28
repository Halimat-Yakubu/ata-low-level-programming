

#include <stdio.h>

void greet_user(char *name);

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    greet_user(name);

    return 0;
}

void greet_user(char *name) {
    printf("Hello, %s! Welcome to the program.\n", name);
}
