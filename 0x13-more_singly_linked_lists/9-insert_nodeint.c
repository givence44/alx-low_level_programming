#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position.
 * @head: Double pointer pointing to the first node in the linked list.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The data to insert in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pal = *head;
	listint_t *fresh;
	unsigned int j;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (j = 0; pal && j < idx; j++)
	{
		if (j == idx - 1)
		{
			fresh->next = pal->next;
			pal->next = fresh;
			return (fresh);
		}
		else
			pal = pal->next;
	}

	return (NULL);
}
