#include "main.h"
/**
* malloc_checked - is check function
* @b: u int
* Return: 0
*/

void *malloc_checked(unsigned int b)
	{
	int *x = malloc(b);

	if (x == 0)
	exit(98);
	return (x);
	}
