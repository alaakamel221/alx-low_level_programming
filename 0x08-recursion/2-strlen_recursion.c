#include <stdio.h>

/**
* _strlen_recursion - is int  func
* @s: is pointer
* Return: 0
*/

int _strlen_recursion(char *s)
	{
		char i = '0';

		if (*s != '\0')
		{
		i++;
		_strlen_recursion(s + 1);
		}
		putchar(i);
	return (0);
	}
