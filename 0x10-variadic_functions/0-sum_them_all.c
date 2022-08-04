#include "variadic_functions.h"
/**
*sum_them_all -> returns all the sum in its parameter
*@n:number of arugument
* 
*return int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	if (n == 0)
	{
		return (0);

	}
	va_start(args, n);
	unsigned int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum = sum + x;

	}
	return (sum);

}
