#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - this is main
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int x = 0;

	char y = 'a';

	while (x <= 9)
	{
	putchar('0' + x);
	x++;
	}
	while (y <= 'f')
	{
	putchar(y);
	y++;
	}
	return (0);
}

