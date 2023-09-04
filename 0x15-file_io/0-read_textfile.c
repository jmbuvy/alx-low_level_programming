#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Funct that reads file text to print STDOUT.
 * @filename: Text file to be read
 * @letters: The no. of letters to be read.
 * Return: 0 if file can't be read or opened, If filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
