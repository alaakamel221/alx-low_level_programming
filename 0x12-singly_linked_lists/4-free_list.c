#include "lists.h"
/**
 * free_list - fun
 * @head: ptr
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	node = head;

	if (!head || !node)
		return;

while (node)
{
	next_node = node->next;
	free(node->str);
	free(node);
	node = next_node;
}
}
