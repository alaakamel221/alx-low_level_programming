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
	int x = '0';
	
	while	(x <= '9')
	{
	putchar(x);
	if (x != '9')
	{
	putchar(',');
	putchar(' ');
	}
	x++;
	}
	putchar('\n');
return (0);
}
