#include "lists.h"

/**
 * sum_dlistint - returns the total of a dlistint_t list's data (n).
 * @head: a list's pointer.
 * Return: sum of each item's data, or 0 if the list is empty, is the lost.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
