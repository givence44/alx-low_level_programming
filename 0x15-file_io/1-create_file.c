#include "main.h"

/**
 * create_file - A function that create a file.
 * @filename: A pointer pointing to the name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if the file already exists, truncate it, if filename is NULL return -1,
 * if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int lamd, g, ent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ent = 0; text_content[ent];)
			ent++;
	}

	lamd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(lamd, text_content, ent);
	if (lamd == -1 || g == -1)
		return (-1);

	close(lamd);

	return (1);
}
