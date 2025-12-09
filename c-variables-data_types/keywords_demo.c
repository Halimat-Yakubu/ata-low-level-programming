#include <stdio.h>

int main()
{
    int num;
    char option;
    float extra;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 5) {
        option = 'A';
        printf("%c. You got the special number!", option);
    }
    
    else if(num < 5){
        option = 'B';
        printf("%c. Too low, try again.", option);
    }
    
    else {
        option = 'C';
        printf("%c. Too high, try again.", option);
    }
    return 0;
}
