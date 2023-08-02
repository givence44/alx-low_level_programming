#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index,
 * index of a listint_t linked list.
 * @head: Pointer pointing to the first node in the linked list.
 * @index: The index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded,: -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *lad;
	listint_t *pal = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pal);
		return (1);
	}

	while (j < index - 1)
	{
		if (pal == NULL || pal->next == NULL)
			return (-1);
		pal = pal->next;
		j++;
	}


	lad = pal->next;
	pal->next = lad->next;
	free(lad);

	return (1);
}
