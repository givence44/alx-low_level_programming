#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: Double pointer pointing to the first node in the linked list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = NULL;
	listint_t *back = NULL;

	while (*head)
	{
		back = (*head)->next;
		(*head)->next = front;
		front = *head;
		*head = back;
	}

	*head = front;

	return (*head);
}
