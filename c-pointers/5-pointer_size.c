#include <stdio.h>

int main() {
    printf("Size of int*  : %zu bytes\n", sizeof(int*));
    printf("Size of char* : %zu bytes\n", sizeof(char*));
    printf("Size of float*: %zu bytes\n", sizeof(float*));
    printf("Size of void* : %zu bytes\n", sizeof(void*));
    
    return 0;
}
