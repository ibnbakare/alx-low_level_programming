#include "function_pointers.h"
/**
 * print_name-> name of function
 * @name:string prams
 * @f: pointer of a fintion acting as a calback
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
