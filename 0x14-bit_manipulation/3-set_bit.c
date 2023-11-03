#include "main.h"

/**
 * set_bit - is func
 * @n: int ptr
 * @index: bit index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = sizeof(n) * 8, i = index;
	int printed = 0;
	
	if (!bit)
		return (-1);
	 while (bit)
        {
                if (*n & (1L << --bit))
                {
                        if (bit == i)
                                return (1);
                        printed++;
                }
                else if (i == bit)
		{
			*n = *n | (1 << i);
                        return (1);
		}
	}
		return (1);
	}
