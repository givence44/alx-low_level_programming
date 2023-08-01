#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list.
 * @head: Pointer pointing to the first node of the linked list.
 * @index: The index of the node, starting at 0
 * Return: If the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pal = head;
	unsigned int j = 0;

	while (pal != NULL)
		if (j == index)
			return (pal);
	{
		pal = pal->next;
		j++;
	}

	return (NULL);
}
