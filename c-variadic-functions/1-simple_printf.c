#include <stdarg.h> // For variadic function utilities (va_list, etc.)
#include <stdio.h>  

static void _print_integer(int n) {
   
    if (n == -2147483648) {
        fputs("-2147483648", stdout);
        return;
    }

    if (n < 0) {
        putchar('-');
        n = -n; 
    }

 char buffer[11]; 
    int i = 0;

    // Handle the case of 0 explicitly
    if (n == 0) {
        putchar('0');
        return;
    }

    // Extract digits in reverse order
    while (n > 0) {
        buffer[i++] = (n % 10) + '0';
        n = n / 10;
    }

    while (i > 0) {
        putchar(buffer[--i]);
    }
  void _printf(const char* format, ...) {

    va_list args;
    va_start(args, format);

    
    for (int i = 0; format[i] != '\0'; i++) {
        
        if (format[i] != '%') {
            putchar(format[i]);
            continue; 
        }
.
        i++;

        if (format[i] == '\0') {
            putchar('%');
            break; 
        }

        switch (format[i]) {
            case 'c': {
                int c = va_arg(args, int);
                putchar(c);
                break;
            }
            case 's': {
                const char* str = va_arg(args, const char*);
                
                if (str == NULL) {
                    fputs("(null)", stdout);
                } else {
                    fputs(str, stdout);
                }
                break;
            }
            case 'i': {
                int num = va_arg(args, int);
                _print_integer(num);
                break;
            }
            case '%': {
                putchar('%');
                break;
            }
            default: {
                putchar('%');
                putchar(format[i]);
                break;
            }
        }
    }

    va_end(args);
}
}
