#include <stdio.h>
#include <string.h>

int main() {
    char name[50]; // Character array to store the name
    int age;
    char grade;

    // Prompt for the user's name
    printf("Enter your name: ");
    // Use fgets to read the full line, including spaces
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character that fgets adds
    name[strcspn(name, "\n")] = 0;

    // Prompt for the user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt for the user's grade
    // Add a space before %c to consume the leftover newline from the previous scanf
    printf("Enter your grade (e.g., A, B, C): ");
    scanf(" %c", &grade);

    // Display all the details in a single sentence
    printf("Hello, %s. You are %d years old and your grade is %c.\n", name, age, grade);

    return 0;
}
