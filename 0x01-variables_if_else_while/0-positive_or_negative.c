#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - This is a description
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%dis positive", n);
	}
else if (n == 0)
	{
	printf("%dis zero", n);
	}
	else
	{
	printf("%dis negative", n);
	}
	return (0);
}
