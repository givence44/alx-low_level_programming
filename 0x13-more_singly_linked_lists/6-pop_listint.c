#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * a listint_t linked list.
 * @head: A pointer pointing to the first element of the linked list.
 * Return: Returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *pal;
	int v;

	if (!head == Null)
		return (0);

	v = (*head)->v;
	pal = (*head)->next;
	free(*head);
	*head = pal;

	return (v);
}
