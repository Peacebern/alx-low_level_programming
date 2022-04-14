#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list valist;
    va_start(valist, n);
    unsigned int i;
    
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(valist, int));
        
        if (separator && i < n -1)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(valist);
}
