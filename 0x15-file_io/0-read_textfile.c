#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- this responsible about Read text in file print to library
 * @filename: it's text file to help being read in f
 * @letters: just   letters number  to be read in f
 * Return: wr- count of buyr what read and writed
 *        0 if fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	rd = read(fd, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);

	free(bf);
	close(fd);
	return (wr);
}
