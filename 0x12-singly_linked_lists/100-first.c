#include <stdio.h>

void begin(void) __attribute__ ((constructor));

/**
 * begin - A funtion that prints a sentence before
 * the main funtion is executed.
 */
void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
