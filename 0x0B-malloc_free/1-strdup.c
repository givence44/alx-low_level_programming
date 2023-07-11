#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String to duplicate.
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int a, i = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	return (s);
}
