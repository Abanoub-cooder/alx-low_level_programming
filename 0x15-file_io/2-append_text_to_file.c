#include "main.h"

/**
 * append_text_to_file - it's appends text in  the file end
 * @filename: prameter ptr to the name of file created.
 * @text_content: ptr  to a string that wrote in file
 *
 * Return: If  func fail or filename  NULL - -1.
 *         If files not found or user not write  permision - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
