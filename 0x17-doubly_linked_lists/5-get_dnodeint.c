#include "lists.h"

/**
 * get_dnodeint_at_index - returns a dlistint_t linked list's nth node.
 * @head: a list's pointer.
 * @index: Node nth.
 * Return: If the node doesn't exist, nth node returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
