#include "main.h"

/**
 * _strcmp - Function that compare two string values
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
