#include "main.h"

/**
* add -> adds two number
* @x : param1
* @y : param2
* Return: x + y
*/

<<<<<<< HEAD
int add(int x, int y)
{
	return (x + y);
}
=======
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar(c + '0');
			if (b != 0 && c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
>>>>>>> 4c1affb799f1eeb0b0626e0569340e6dee46eec2
