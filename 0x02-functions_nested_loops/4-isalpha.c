#include "main.h"
/**
*_isalpha - checks for alphabetical letters
*@c: a charter to be checke on
*Return: returns 0 or 1 depending on condition
*/
int _islower(int c)
{
if((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
return (1);
else
return (0);
}
