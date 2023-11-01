#include "lists.h"

/**
 * add_nodeint - func
 * @head: ptr
 * @n: int
 * Return: new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	new_node->n = n;

	if (current)
	{
	while (current->next)
	current = current->next;
	current->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
