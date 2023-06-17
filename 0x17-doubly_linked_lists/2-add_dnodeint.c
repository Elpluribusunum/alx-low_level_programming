#include "lists.h"

/**
 * add_dnodeint - adds a new node to the dlistint_t list's first node.
 * @head: reference to the list's top element.
 * @n: a new node's int should be set.
 * Return: the new element's address, or NULL if it was unsuccessful.
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
