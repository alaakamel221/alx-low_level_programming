#include <stdio.h>
/**
* sqr - is function
* @n: dddd
* @val: ffff
* Return: int
*/

int sqr(int n, int val)
{

if ((val * val) == n)
	return (val);
else if ((val * val) < n)
	return (sqr(n, val + 1));
else
	return (-1);

}
/**
* _sqrt_recursion - function
*
*
* @n: is int
* Return: int
*/
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

