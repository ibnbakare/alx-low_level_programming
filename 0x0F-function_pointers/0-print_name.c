#include "function_pointers.h"
/**
 * main ->print the name passed to the callback
 * funtion
 * 
 * @name:string prams
 * @f: poinyer of a fintion acting as a calback
 * function
 */

void print_name(char *name, void (*f)(char *))
{
        f(name);
}
