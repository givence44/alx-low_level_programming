#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - A function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes s2.
 * Return: pointer to the resulting string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l = 0, ent = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[ent])
		ent++;

	if (n < ent)
		s = malloc(sizeof(char) * (l + n + 1));
	else
		s = malloc(sizeof(char) * (l + ent + 1));

	if (!s)
		return (NULL);

	while (i < l)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ent && i < (l + n))
		s[i++] = s2[j++];

	while (n >= ent && i < (l + ent))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
