#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    
    printf("Initial address: %p\n", (void*)ptr);
    
    ptr = ptr + 1;  // or simply: ptr++;
    
    printf("Address after increment: %p (Address increased by %zu bytes, which is sizeof(int) on this system)\n", 
           (void*)ptr, sizeof(int));
    
    return 0;
}

