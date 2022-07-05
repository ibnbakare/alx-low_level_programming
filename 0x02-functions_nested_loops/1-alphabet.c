#include "main.h"
/**
 *print alphabelt -->print lowercase alphabelts
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar(32);
}
