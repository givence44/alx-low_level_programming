#include <stdio.h>

/**
* main - Prints numbers of base 10 starting from 0, followed by a new line.
*
* Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
