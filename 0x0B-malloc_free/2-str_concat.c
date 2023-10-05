#include "main.h"
/**
* str_concat - is func
*@s1: is pointr
*@s2: is pointer
* Return: 0
*/
char *str_concat(char *s1, char *s2)
	{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	char *ptr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[j] != '\0')
	{
	j++;
	}
	ptr = (char *) malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	while (x < i)
	{
	ptr[x] = s1[x];
	x++;
	}
	while (y < j)
	{
	ptr[x] = s2[y];
	x++;
	y++;
	}
	return (ptr);
	}
