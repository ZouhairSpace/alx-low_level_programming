#include "main.h"

/**
 * create_file - creates a file and fills it with text content
 * @filename: name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written != text_length)
			return (-1);
	}

	close(fd);

	return (1);
}
