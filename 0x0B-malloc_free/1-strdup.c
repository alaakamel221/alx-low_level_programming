#include "main.h"
/**
* _strdup - is function
* @str: is char
* Return: 0
*/
char *_strdup(char *str)
	{
	char *gg;
	unsigned int i;
	unsigned int j;

	i = 0;
	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i] != '\0')
	{
	i++;
	}
	gg = (char *)malloc(sizeof(char) * (i + 1));
	if (gg == NULL)
	{
	return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	gg[j] = str[j];
	}
	return (gg);
	}
