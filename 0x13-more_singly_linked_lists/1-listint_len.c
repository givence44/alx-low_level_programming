#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 * @h: The pointer to the node listint_t list.
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}

	return (v);
}
