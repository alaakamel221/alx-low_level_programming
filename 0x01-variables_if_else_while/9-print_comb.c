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
	
	while (x <= 8)
	{
	putchar('0' + x);
	x++;
	putchar(',');
	putchar(' ');
	}
	putchar('9');
return 0;
}
