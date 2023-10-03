#include <stdlib.h>
#include "main.h"
/**
* main - is function
* @argc: is int
* @argv: is p
* Return: 0
*/
int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
return (0);
}
