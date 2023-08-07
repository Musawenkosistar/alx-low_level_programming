#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to stdout.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rd;
	ssize_t f;
	ssize_t i;

	rd = open(filename, O_RDONLY);
	if (rd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(rd, buf, letters);
	f = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(rd);
	return (f);
}
