#include <stdarg.h> // For variadic function utilities (va_list, etc.)
#include <stdio.h>  // For putchar() and fputs()

/**
 * @brief Helper function to print an integer to stdout.
 *
 * This function handles positive numbers, negative numbers, zero,
 * and the edge case of INT_MIN.
 *
 * @param n The integer to print.
 */
static void _print_integer(int n) {
    // Handle the edge case of INT_MIN (-2147483648 on 32-bit systems)
    // which cannot be safely negated to a positive int.
    if (n == -2147483648) {
        fputs("-2147483648", stdout);
        return;
    }

    // Handle negative numbers
    if (n < 0) {
        putchar('-');
        n = -n; // Now n is positive and safe to work with
    }

    // Use a buffer to store digits in reverse order
    // 10 digits max for 32-bit int, +1 for safety
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

    // Print digits in the correct (forward) order
    while (i > 0) {
        putchar(buffer[--i]);
    }
}

/**
 * @brief Implements a simplified version of printf.
 *
 * This function supports the following format specifiers:
 * %c - Character
 * %s - String
 * %i - Integer
 * %% - A literal '%' character
 *
 * It does not support any flags, width, or precision modifiers.
 *
 * @param format The format string.
 * @param ...    The variable arguments corresponding to the format specifiers.
 */
void _printf(const char* format, ...) {
    // 1. Initialize the variadic argument list
    va_list args;
    va_start(args, format);

    // 2. Iterate through the format string character by character
    for (int i = 0; format[i] != '\0'; i++) {
        
        // If it's not a format specifier, just print the character
        if (format[i] != '%') {
            putchar(format[i]);
            continue; // Move to the next character
        }

        // We found a '%'. Move to the character *after* it.
        i++;

        // Handle the case where the string ends with just '%'
        if (format[i] == '\0') {
            putchar('%');
            break; // Exit the loop
        }

        // 3. Handle the format specifier
        switch (format[i]) {
            case 'c': {
                // 'char' is promoted to 'int' when passed via '...'
                int c = va_arg(args, int);
                putchar(c);
                break;
            }
            case 's': {
                const char* str = va_arg(args, const char*);
                
                // Handle NULL strings gracefully
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
                // Handle the '%%' escape sequence
                putchar('%');
                break;
            }
            default: {
                // Unknown specifier. Print the '%' and the character
                // as literal text.
                putchar('%');
                putchar(format[i]);
                break;
            }
        }
    }

    // 4. Clean up the argument list
    va_end(args);
}
