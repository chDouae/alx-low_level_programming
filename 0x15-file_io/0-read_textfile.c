#include "main.h"
#include <stdlib.h>

/**
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	r = read(fd, s, letters);
	w = write(STDOUT_FILENO, s, r);

	free(s);
	close(fd);
	return (w);
}

