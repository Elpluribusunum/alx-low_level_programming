#include "lists.h"

/**
 * add_dnodeint_end - dlistint_t list is extended by the additn of a new node.
 * @head: pointer to the list's top element
 * @n: a new node's int should be set.
 * Return: the new element's address, or NULL if it was unsuccessful.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
