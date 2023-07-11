#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: first input to concatenate
 * @s2: second input to concatenate
 * Return: first and second input concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *cn;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cn = malloc(sizeof(char) * (i + j + 1));

	if (cn == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		cn[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cn[i] = s2[j];
		i++, j++;
	}
	cn[i] = '\0';
	return (cn);
}
