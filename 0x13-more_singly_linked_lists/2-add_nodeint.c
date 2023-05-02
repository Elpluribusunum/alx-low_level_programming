#include "lists.h"

/**
 * add_nodeint - Adds a brand new node at the beginning of a connected listing
 * @head: Pointer to the primary node inside the list
 * @n: Data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
