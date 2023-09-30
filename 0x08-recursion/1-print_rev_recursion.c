#include <stdio.h>

/**
* _print_rev_recursion - like puts
* @s: is pointer
* Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
