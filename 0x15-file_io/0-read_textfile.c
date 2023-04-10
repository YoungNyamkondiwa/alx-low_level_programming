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
	int fd, res_read, res_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	res_read = read(fd, buf, letters);
	if (res_read == -1)
	{
		free(buf);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buf, res_read);
	if (res_write == -1 || res_read != res_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (res_write);
}
