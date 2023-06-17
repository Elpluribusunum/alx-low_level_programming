#include "lists.h"

/**
 * insert_dnodeint_at_index - places a node at a specified position
 * in a dlistint_t list.
 * @h: a list's pointer.
 * @idx: in which to place the node.
 * @n: for the new node's data.
 * Return: the new node's address, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node = *h, *new_node;
	unsigned int index, cont = 0;

	/* make a node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* inserting a border case at the start */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	/* looking for a place to insert */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* general case */
	if (cont == index && aux_node)
	{
		new_node->prev = aux_node;
		new_node->next = aux_node->next;
		if (aux_node->next)
			aux_node->next->prev = new_node;
		aux_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
