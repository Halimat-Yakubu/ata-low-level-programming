#include <stdio.h>

int main()
{
    float radius;
    float area;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); 

    area = PI * radius * radius; 

    printf("The area of the circle is: %.2f\n", area); 
  
    return 0;
}
