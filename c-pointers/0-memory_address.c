#include <stdio.h>

int main() {
    int myVar = 42;
    
    printf("Value of myVar: %d\n", myVar);
    printf("Address of myVar: %p\n", (void*)&myVar);
    
    return 0;
}
