#include <stdio.h>

int main()
{
    // Create a string
    char firstName[30];

    printf("Enter your first name and press enter: \n");
    scanf("%s", firstName);
    printf("Hello %s", firstName, "!");

    return 0;
}
