#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 * at the end of a listint_t list.
 * @head: A double pointer to the listint_t list.
 * @n: An integer data to input in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *pal = *head;


	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (pal->next)
		pal = pal->next;

	pal->next = fresh;

	return (fresh);
}
