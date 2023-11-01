#include "main.h"
/**
 * print_binary - func my own
 * @n: int
 * Return: NULL
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	char str;
	int x = n;
	char *cat;
       
	cat = malloc(sizeof(n) * 8);

	while (x > 0)
	{
		if (x % 2 == 0)
			str = '0';
		else
			str = '1';
	x = x / 2;
	cat[i] = str;
	i++;
	}
	while (i--)
	{
		printf("%c", cat[i]);
	}
}
