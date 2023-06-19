#include <stdio.h>
/**
* main - Entry point
* Return: 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z' || c <= 'Z')
	{
		putchar(c);
		c++;
		if (c > 'z')
		{
			c = 'A';
		}
	}

	putchar('\n');

	return (0);
}
