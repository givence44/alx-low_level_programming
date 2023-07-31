#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of
 * a listint_t list.
 * @head: A double pointer to the listint_t list.
 * @n: An integer to add in the node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
