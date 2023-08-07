#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		w = write(fd, text_content, len);

		if (w < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
