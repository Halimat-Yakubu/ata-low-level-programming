#include <stdio.h>

int main() {
    char ch = 'A';
    float f = 3.14f;
    double d = 123.456;
    
    char *ptr_ch = &ch;
    float *ptr_f = &f;
    double *ptr_d = &d;
    
    printf("Character: %c, Address: %p, Value via pointer: %c\n", 
           ch, (void*)&ch, *ptr_ch);
    printf("Float: %f, Address: %p, Value via pointer: %f\n", 
           f, (void*)&f, *ptr_f);
    printf("Double: %f, Address: %p, Value via pointer: %f\n", 
           d, (void*)&d, *ptr_d);
    
    return 0;
}
