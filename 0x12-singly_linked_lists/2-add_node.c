#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of
 * a list_t list.
 * @head: A double pointer to the list_t list.
 * @str: A string to add in the node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
