#include <stdio.h>
/**
* factorial - is finction
* @n: is integer
* Return: 0
*/

int factorial(int n)
{
	int x = 1;

	if (n == 0)
	return (1);
	
	else if (n < 0)
	return (-1);
	
	else
	{
	x = n * factorial(n - 1);
        return (x);	
	}
	}
