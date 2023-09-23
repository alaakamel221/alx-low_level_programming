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
	char x = 'a';

	char y = 'A';

	while	(x <= 'z')
{
	putchar(x);
	x++;

}
	while	(y <= 'Z')
{
	putchar(y);
	y++;

}
	putchar('\n');
	return (0);
}

