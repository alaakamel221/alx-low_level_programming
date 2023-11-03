#include "main.h"

/**
 * clear_bit - fun
 * @n: int ptr
 * @index: int
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	if (*n & 1L << index)
		*n = *n ^ (1 << index);
return (1);
}
