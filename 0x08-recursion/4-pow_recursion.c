#include <stdio.h>
/**
* _pow_recursion - is power function
* @x: is int
* @y: is integer
* Return: 0
*/
int _pow_recursion(int x, int y)
	{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
	{
	x = x * _pow_recursion(x, y - 1);
	return (x);
	}
	}
