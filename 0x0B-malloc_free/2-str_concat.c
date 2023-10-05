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
	char *ptr;

	ptr = (char *) malloc(sizeof(char) * i * j);
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i] != '\0')
	{
	ptr[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	ptr[i + j + 1] = s2[j];
	j++;
	}
	return (ptr);
	}
