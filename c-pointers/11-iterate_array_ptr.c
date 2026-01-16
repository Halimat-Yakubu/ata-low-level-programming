#include <stdio.h>

int main() {
    int norm_arr[5] = {5, 10, 15, 20, 25};
    int *ptr = norm_arr;
    
    for (int i = 0; i < 5; i++) {
        printf("Element %d (Value: %d, Address: %p)\n", i, *ptr, (void*)ptr);
        ptr++;
    }
    
    return 0;
}
