#include <stdio.h>
#include <stdlib.h>
/**
 * this should print of the values of ch
 * in lowercacses
 */
int main(void)
{
int ch;
for (ch = "97"; ch <= "122"; ch++)
{
if(ch != "113" && ch != "101")
putchar(ch);
putchar(10);
}
return (0);
}