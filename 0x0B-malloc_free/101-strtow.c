#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - A function that splits a string into words.
 * @str: string to split.
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **cent, *tmp;
	int i, k = 0, ent = 0, words, c = 0, start, end;

	while (*(str + ent))
		ent++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	cent = (char **) malloc(sizeof(char *) * (words + 1));
	if (cent == NULL)
		return (NULL);

	for (i = 0; i <= ent; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				cent[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	cent[k] = NULL;

	return (cent);
}
