#include <stdio.h>

int main() {
    int norm_arr[3] = {10, 20, 30};
    int *ptr = norm_arr;
    
    printf("Array elements: [%d, %d, %d]\n", norm_arr[0], norm_arr[1], norm_arr[2]);
    
    for (int i = 0; i < 3; i++) {
        printf("Accessing element %d using array index: %d\n", i, norm_arr[i]);
        printf("Accessing element %d using pointer arithmetic: %d\n", i, *(ptr + i));
    }
    
    return 0;
}
