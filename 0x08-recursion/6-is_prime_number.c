#include "main.h"
#include <stdio.h>
/**
* prime - is func
* @n: oooo
* @i: ood
* Return: int
*/
int prime(int n, int i)
	{
	if (n <= 1)
	return (0);
	else if ((n % i) != 0 && i <  n)
	return (prime(n, i + 1));
	else if ((n % i) == 0 && i < n)
	return (0);
	else
	return (1);
	}

/**
* is_prime_number - is function
* @n: is int
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
	}
