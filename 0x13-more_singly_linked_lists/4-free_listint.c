#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer pointing to the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *pal;

	while (head)
	{
		pal = head->next;
		free(head);
		head = pal;
	}
}
