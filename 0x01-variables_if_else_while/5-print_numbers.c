#include <stdio.h>

/**
* main - Print numbers of base 10 from 0 to 9.
*
* Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar ('\n');
	return (0);
}
