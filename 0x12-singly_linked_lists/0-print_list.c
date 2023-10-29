#include "lists.h"

/**
* str_length - to calculate length
* @s: char ptr
* Return: int
*/
int str_length(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	i++;
return (i);
}

/**
* print_list - fun
* @h: list
* Return: size_t
*/
size_t print_list(const list_t *h)
	{
	int i = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", str_length(h->str), h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
i++;
	}
	return (i);
}
