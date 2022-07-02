#include <stdio.h>
#include <stdlib.h>
/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
int count;
for (i = 0; i <= 9; i++)
{
count = count + i;
}
printf("%c\n", count);
return (0);
}
