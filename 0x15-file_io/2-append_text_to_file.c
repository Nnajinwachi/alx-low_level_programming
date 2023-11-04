#include "main.h"

/**
 * append_text_to_file - function to append a text to a file
 * @filename: pointer to the file
 * @text_content: content of the file
 *
 * Return: On success 1, on failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		length = write(fd, text_content, i);

		if (length == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
