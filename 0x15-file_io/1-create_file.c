#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: string to be written to file
 *
 * Return: 1 on success, -1 on failure.
 * Author: Gamachu AD
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		length = 0;
		while (text_content[length])
			length++;
		wr = write(fd, text_content, length);
		if (wr != length)
			return (-1);
	}
	close(fd);
	return (1);
}
