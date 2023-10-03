#include "main.h"
#include <stdlib.h>
/**
* main - is function
* @argc: is int
* @argv: is p
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 2)
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	printf("Error\n");
	return (0);
	}
