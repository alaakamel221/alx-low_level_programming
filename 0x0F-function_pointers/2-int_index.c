#include "function_pointers.h"
/**
* int_index - is function
* @array: is array
* @size: int
* @cmp: is function pointer
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
		if (cmp(array[i]))
		return (i);
		i++;
		}
	return (-1);
}
