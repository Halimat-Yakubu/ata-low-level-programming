#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
  
    printf("The character '%c' has an ASCII value of %d.\n", character, character);

    return 0;
}
