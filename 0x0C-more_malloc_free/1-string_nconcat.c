#include "main.h"
/**
* string_nconcat - is fun
* @s1: kkk
* @s2: ggg
* @n: fff
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
	{
	char *str;
	unsigned int i, x, v, d;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (x = 0; s2[x] != '\0'; x++)
	;
	str = malloc(i + n + 1);
	if (str == NULL)
	return (NULL);
	for (v = 0; s1[v] != '\0'; v++)
	{
	str[v] = s1[v];
	}
	for (d = 0; d <= n; d++)
	{
	str[v] = s2[d];
	v++;
	}
	return (str);
	}
