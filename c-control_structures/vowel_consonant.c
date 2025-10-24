#include <stdio.h>
#include <ctype.h> 

int main() {
    char c;
    char lower_c;

    printf("Enter an alphabet: ");
    scanf(" %c", &c); 

    lower_c = tolower(c);

    if (lower_c >= 'a' && lower_c <= 'z') {
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
            printf("'%c' is a vowel.\n", c);
        } else {
            printf("%'c' is a consonant.\n", c);
        }
        
    } else {
        printf("Error: The input '%c' is not an alphabet.\n", c);
    }

    return 0;
}
