#include <stdio.h>

int main() {
    char userInput[100];

    printf("Please enter a line of text: ");
    fgets(userInput, 100, stdin);

    
    printf("\nYou entered: ");
    fputs(userInput, stdout);

  
    return 0;
}

