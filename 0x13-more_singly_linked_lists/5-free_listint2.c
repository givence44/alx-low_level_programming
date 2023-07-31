#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer pointing to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *pal;

	if (head == NULL)
		return;

	while (*head)
	{
		pal = (*head)->next;
		free(*head);
		*head = pal;
	}

	*head = NULL;
}
