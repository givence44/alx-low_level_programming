#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in
 * a linked list_t list.
 * @h: The pointer to the node list_t list.
 * Return: The number of elements in the pointer.
 */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
