#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: A pointer to the next node list to print.
 * Return: Number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}

	return (v);
}
