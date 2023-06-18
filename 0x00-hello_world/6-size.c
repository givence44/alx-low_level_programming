#include <stdio.h>
/**
* main - A program that print various types of compile on the computer
* Return: 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (char)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
