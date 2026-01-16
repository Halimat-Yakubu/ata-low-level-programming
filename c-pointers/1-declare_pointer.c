#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address of num): %p\n", (void*)ptr);
    
    return 0;
}
