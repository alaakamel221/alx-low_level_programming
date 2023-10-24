#include "function_pointers.h"
/**
* array_iterator - is fun
* @array: is array
* @size: size of array
* @action: pointer to fun
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
	{
		int *ptr;

		ptr = array + size - 1;
		if (array && size && action)
			while (array <= ptr)
				action(*array++);
	}
