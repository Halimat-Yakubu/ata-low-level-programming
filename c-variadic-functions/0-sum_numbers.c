#include <stdarg.h> 
int sum_all(int count, ...) {
    int sum = 0;
    
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        
        sum += num;
    }
     va_end(args);

    return sum;
}
