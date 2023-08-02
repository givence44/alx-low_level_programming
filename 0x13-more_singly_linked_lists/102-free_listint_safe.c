#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list.
 * @h: Double pointer pointing to the first node in the linked list.
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *pal;
	size_t ent = 0;
	int fit;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		fit = *h - (*h)->next;
		if (fit > 0)
		{
			*h = pal;
			ent++;
			pal = (*h)->next;
			free(*h);
		}
		else
		{
			free(*h);
			*h = NULL;
			ent++;
			break;
		}
	}

	*h = NULL;

	return (ent);
}
