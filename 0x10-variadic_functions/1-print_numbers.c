#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i =0;
    unsigned int x;
    va_list args;
    va_start(args,n);
    for (i =0; i < n; i++)
    {
        x = va_arg(args, int);
        printf("%d",x);
        if(i != (n-1) && separator != NULL)
        {
            printf("%c", separator);
        }
    }
}