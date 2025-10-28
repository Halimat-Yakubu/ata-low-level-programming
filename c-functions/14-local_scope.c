

#include <stdio.h>

void demonstrate_local_scope(void);

int main() {
    int local_var = 10; 

    printf("Value of local_var inside main: %d\n", local_var);

    demonstrate_local_scope();

    return 0;
}

void demonstrate_local_scope(void) {
    int local_var = 50; // local variable inside demonstrate_local_scope

    printf("Inside demonstrate_local_scope: local_var = %d\n", local_var);
    printf(“Inside main: local_var = %d\n”, local_var);
}
