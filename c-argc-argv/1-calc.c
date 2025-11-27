#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int num1, num2, result;
    
    if (argc != 4)
    {
        printf("Usage: ./calc <number1> <operator> <number2>\n");
        return 1;
    }
    
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    
    if (strcmp(argv[2], "+") == 0)
    {
        result = num1 + num2;
        printf("Result: %d\n", result);
    }
    else if (strcmp(argv[2], "-") == 0)
    {
        result = num1 - num2;
        printf("Result: %d\n", result);
    }
    else
    {
        printf("Error: Invalid operator. Use '+' or '-'.\n");
        return 1;
    }
    
    return 0;
}
