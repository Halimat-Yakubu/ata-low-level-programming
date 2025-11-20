
#include <stdarg.h>
#include <unistd.h> // For the write function
#include <string.h> // For string functions (like getting string length)

// Helper function to print a string (used internally for %s)
static int print_string(const char *s)
{
    if (s == NULL)
        s = "(null)";
    // write is a low-level system call that writes data to a file descriptor.
    // 1 is the file descriptor for standard output (stdout).
    return write(1, s, strlen(s));
}

// Helper function to print an integer (used internally for %i)
static int print_integer(int n)
{
    char buffer[20]; // Buffer large enough for any 32-bit integer (max 10 digits + sign + null)
    int i = 0;
    int is_negative = 0;
    int count = 0;

    if (n == 0)
    {
        buffer[i++] = '0';
    }
    else
    {
        if (n < 0)
        {
            is_negative = 1;
            n = -n; // Make it positive for digit extraction
        }

        // Convert number to string in reverse order
        while (n > 0)
        {
            buffer[i++] = (n % 10) + '0';
            n /= 10;
        }

        if (is_negative)
            buffer[i++] = '-';
    }

    // Reverse the string and print it
    for (int j = i - 1; j >= 0; j--)
    {
        count += write(1, &buffer[j], 1);
    }

    return count;
}


/**
 * _printf - Simplified custom printf function.
 * @format: The format string containing text and specifiers (%c, %i, %s).
 * @...: The variable arguments corresponding to the format specifiers.
 *
 * This function processes the format string, printing characters normally,
 * and handling the simple specifiers for characters, integers, and strings.
 */
void _printf(const char *format, ...)
{
    va_list args;
    const char *p;
    int i;
    char c;
    char *s;

    // 1. Initialize the variadic argument list
    va_start(args, format);

    for (p = format; *p != '\0'; p++)
    {
        if (*p == '%')
        {
            // Move past the '%'
            p++;

            switch (*p)
            {
                case 'c':
                    // Get char argument (promoted to int in variadic call)
                    c = (char)va_arg(args, int);
                    write(1, &c, 1);
                    break;
                case 'i':
                    // Get integer argument
                    i = va_arg(args, int);
                    print_integer(i);
                    break;
                case 's':
                    // Get string argument
                    s = va_arg(args, char *);
                    print_string(s);
                    break;
                case '%':
                    // Handle '%%' by printing a single '%'
                    write(1, p, 1);
                    break;
                default:
                    // If an unsupported specifier is found, print '%' and the specifier
                    write(1, p - 1, 2);
                    break;
            }
        }
        else
        {
            // Print normal characters
            write(1, p, 1);
        }
    }

    // 2. Clean up the argument list
    va_end(args);
}
