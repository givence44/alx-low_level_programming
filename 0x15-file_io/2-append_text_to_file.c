#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: A pointer pointing to the name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure, Do not create the file if it does
 * not exist. If filename is NULL return -1, If text_content is NULL, do not
 * add anything to the file. Return 1 if the file exists and -1 if the file
 * does not exist or if you do not have the required permissions to write the
 * file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g, lamd, ent = 0;

	if (filename == NULL)
		return (-1);

	lamd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		for (ent = 0; text_content[ent];)
			ent++;
	}

	g = write(lamd, text_content, ent);
	if (lamd == -1 || g == -1)
		return (-1);

	close(lamd);

	return (1);
}
