#include "main.h"

/**
 * string_toupper - Change all lowercase letters,
 * of a string to uppercase.
 * @n: The string to be changed.
 * Return: Pointer to change string n.
 */

char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
