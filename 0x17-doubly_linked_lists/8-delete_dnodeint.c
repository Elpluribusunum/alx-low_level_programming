#include "lists.h"

/**
 * delete_dnodeint_at_index - removes the node from a dlistint_t list at index.
 * @head: a list's pointer.
 * @index: the location of the deleted node.
 * Return: 1 if it was successful and -1 if it wasn't.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux_node = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* Case for an empty list's borders. */
	if (!(*head))
		return (-1);

	/* marginal case for deletion at the start */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* positioning lookup deletion */
	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* standard case  */
	if (cont == idx && aux_node)
	{
		node_to_delete = aux_node->next;
		if (node_to_delete->next)
		node_to_delete->next->prev = aux_node;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
