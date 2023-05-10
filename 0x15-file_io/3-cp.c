#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Dedicate 1024 bytes for a buf.
 * @file: it's nameing of the file buffer .
 *
 * Return: ptr dt the newly-dedicate buf.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write dt %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file -  block file descriptors.
 * @fd:  file descriptor  closed after that.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - make anoter version the contents  dt another file .
 * @argc:  number of arguments supported dt the program.
 * @argv: countog arrray of  pointers dt the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int fr, dt, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, buffer, 1024);
	dt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read fr file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(dt, buffer, re);
		if (dt == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write dt %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(fr, buffer, 1024);
		dt = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buffer);
	close_file(fr);
	close_file(dt);
	return (0);
}
