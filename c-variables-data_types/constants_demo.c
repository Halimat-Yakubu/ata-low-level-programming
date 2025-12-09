#include <stdio.h>
#define PI_DEFINE 3.14
int main()
{
   const float PI_CONST = 3.14;
   printf("Value of PI using #define: %.2f\n", PI_DEFINE);
   printf("Value of PI using const: %.2f\n", PI_CONST);
   
   return 0;
}
