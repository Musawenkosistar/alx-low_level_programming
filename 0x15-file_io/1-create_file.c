#include "main.h"
#include <stdlib.h>

/**
 * create_file - makes a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int rd, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	rd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(rd, text_content, len);

	if (rd == -1 || j == -1)
		return (-1);

	close(rd);

	return (1);
}

