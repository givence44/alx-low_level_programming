#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: Pointer pointing to the first node in the linked list.
 * Return: If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pal = head;

	while (pal != NULL)
	{
		sum += pal->n;
		pal = pal->next;
	}

	return (sum);
}
