#include "function_pointers.h"
/**
 * print_name-> name of function
 * @name:string prams
 * @f: poinyer of a fintion acting as a calback
 * function
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
