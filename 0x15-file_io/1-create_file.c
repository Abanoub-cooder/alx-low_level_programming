#include "main.h"
/**
 * create_file - st up a file in ram .
 * @filename:  prameter ptr to the name of file created.
 * @text_content: ptr  to a string that wrote in file
 *
 * Return: if func fsils - -1.
 *         anoter - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fc, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fc, text_content, len);

	if (fc == -1 || wr == -1)
		return (-1);

	close(fc);
	return (1);
}
