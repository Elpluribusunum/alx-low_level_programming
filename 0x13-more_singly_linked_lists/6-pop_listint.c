#include "lists.h"

/**
 * pop_listint - removes the leading node of a linked list
 * @head: a pointer to the first element of the linked list
 *
 * Return: Deleted item data,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
