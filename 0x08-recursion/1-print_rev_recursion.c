#include <stdio.h>

/**
* _print_rev_recursion - like puts
* Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0' )
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
	else
	putchar('\n');
}
