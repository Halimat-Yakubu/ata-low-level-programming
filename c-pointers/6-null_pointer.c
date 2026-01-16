#include <stdio.h>

int main() {
    int *ptr = NULL;
    
    if (ptr == NULL) {
        printf("ptr is NULL. Cannot dereference.\n");
    } else {
        printf("ptr is NOT NULL. Value pointed to by ptr: %d\n", *ptr);
    }
    
    int valid_num = 15;
    ptr = &valid_num;
    
    printf("Value for valid_num: %d\n", valid_num);
    
    if (ptr == NULL) {
        printf("ptr is NULL. Cannot dereference.\n");
    } else {
        printf("ptr is NOT NULL.\nValue pointed to by ptr: %d\n", *ptr);
    }
    
    return 0;
}
