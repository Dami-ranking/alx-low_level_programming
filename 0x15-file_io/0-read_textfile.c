#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and prints it to STDOUT.
 * @filename: text file to be read.
 * @letters: number of letters to read.
 * Return: actual number of letters, 0 filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
