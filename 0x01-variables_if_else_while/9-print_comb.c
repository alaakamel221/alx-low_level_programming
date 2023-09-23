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
	
	if (x <= 9)
	{
	putchar('0' + x);
	if (x != 9)
	{	
	putchar(',');
	putchar(' ');
	}
	x++;
	}
return (0);
}
