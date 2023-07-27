#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer pointing to the list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *pal;

	while (head)
	{
		pal = head->next;
		free(head->str);
		free(head);
		head = pal;
	}
}
