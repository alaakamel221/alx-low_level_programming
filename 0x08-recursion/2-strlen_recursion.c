#include <stdio.h>

/**
* _strlen_recursion - is int  func
* @s: is pointer
* Return: int
*/

int _strlen_recursion(char *s)
	{
		int i = 0;

		if (*s != '\0')
		{
		i++;
		return (1+_strlen_recursion(s + 1));
		}
	return (0);
	}
