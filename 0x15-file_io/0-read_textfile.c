#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: the file to be printed.
 * @letters: Number of letters to be read and to be printed.
 * Return: Actual number of letters to be read and to be printed.
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
