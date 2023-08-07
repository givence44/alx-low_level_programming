#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file and prints.
 * it to the POSIX standard output.
 * @filename: The name of file to read.
 * @letters: The number of letters it should read and print.
 * Return: returns the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0, if write fails or does not write
 * the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lad;
	ssize_t lamd;
	ssize_t g;
	ssize_t b;

	lamd = open(filename,O_RDONLY);
	if (lamd == -1)
		return (0);

	lad = malloc(letters * sizeof(char));
	b = read(lamd, lad, letters);
	close(lamd);

	g = write(STDOUT_FILENO, lad, b);
	free(lad);

	return (g);
}
