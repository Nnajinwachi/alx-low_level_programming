#include "main.h"

/**
 * read_textfile - function to reads a text file
 * @filename: pointer to the file
 * @letters: number of letters
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t length, lengthw, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	length = read(fd, buffer, letters);

	if (length == -1)
		return (0);

	lengthw = write(STDOUT_FILENO, buffer, length);
	free(buffer);
	close(fd);

	if (lengthw == -1)
		return (0);

	return (lengthw);
}
