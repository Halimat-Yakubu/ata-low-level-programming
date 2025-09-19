#include <stdio.h>

int main()
{
    int height = 5;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" "); 
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*"); 
        }
        printf("\n"); 
    }

    return 0;
}
// This prints a pyramid shape
