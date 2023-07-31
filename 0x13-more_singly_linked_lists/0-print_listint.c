#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: A pointer to the next node list to print.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
		printf("%d\n", h->n);
		v++;
		h = h->next;
	}

	return (v);
}
