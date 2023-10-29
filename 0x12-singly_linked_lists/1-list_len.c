#include "lists.h"

/**
 * list_len - is fun
 * @h: ptr to list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
{
	h = h->next;
	i++;
}
	return (i);
}
