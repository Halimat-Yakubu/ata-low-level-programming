#include <stdio.h>
#include <time.h>

int main()
{
    time_t now = time(NULL);        
    struct tm *t = localtime(&now); 

    printf("The year is %d\n", t->tm_year + 1900);
}
