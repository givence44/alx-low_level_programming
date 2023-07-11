#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, k, m = 0, n = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			n++;
	}
	n += ac;

	s = malloc(sizeof(char) * n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][k]; k++)
	{
		s[m] = av[i][k];
		m++;
	}
	if (s[m] == '\0')
	{
		s[m++] = '\n';
	}
	}
	return (s);
}
