#include "main.h"

/**
 * get_bit - fun
 * @n: int
 * @index: int
 *Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = sizeof(n) * 8, i = index;
	int printed = 0;

	if (!bit)
		return (-1);

	while (bit)
	{
		if (n & 1L << --bit)
		{
			if (bit == i)
				return (1);
			printed++;
		}
		else if (printed && i == bit)
			return (0);
	}
	if (!printed)
		return (0);
	if (i > bit)
		return (-1);
return (0);
}
