#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to name of file.
 * @text_content: null terminated string.
 *
 * Description: Do not create a file if it does not exist
 * Return: 1 on success, -1 on failure.
 * Author: Gamachu AD
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		app = write(file, text_content, i);
		if (app < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
