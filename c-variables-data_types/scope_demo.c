#include <stdio.h>
int gcounter = 5;

int main()
{
   int counter = 10;
   printf ("Global counter: %d\n", gcounter);
   printf ("Local counter: %d", counter);
   
   return 0;
}
