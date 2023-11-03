#include "main.h"

/**
 * flip_bits - func
 * @n: int
 * @m: int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor = n ^ m, count = 0;

	while (xor)
	{
		if (xor & 1UL)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
