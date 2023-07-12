#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 *
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 *
 *	if write fails or Filename is NULL, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t gt;
	ssize_t o;
	ssize_t r;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(gt, buf, letters);
	o = write(STDOUT_FILENO, buf, r);
	free(buf);
	close(gt);
	return (o);
}
