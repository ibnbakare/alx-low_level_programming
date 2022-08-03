#include "function_pointers.h"
/**
*array_iterator -> Name of the function
*@array: defining parameter array
*@size:defining parameter array lenght
*@action: pointer funtion
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (int i = 0; i < size; i++)
{
action(array[i]);
}
}
