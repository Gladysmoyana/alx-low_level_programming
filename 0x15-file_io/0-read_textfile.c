#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile - reads text file and prints the letters to STDOUT
 *@filename: name
 *@letters:reads numbers printed
 *Return: the number of bytes printed. if it fails, it returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t n;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (n);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (n);
}

