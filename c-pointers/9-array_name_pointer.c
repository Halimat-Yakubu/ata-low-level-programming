#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = array;
    
    printf("Address of array[0]: %p\n", (void*)&array[0]);
    printf("Address of array (array name): %p\n", (void*)array);
    printf("Value of ptr (address of array[0]): %p\n", (void*)ptr);
    
    return 0;
}
