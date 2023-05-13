#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append the text to
 * @text_content: the content to be appended into the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, content_length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[content_length])
			content_length++;
		bytes_written = write(fd, text_content, content_length);
		if (bytes_written != content_length)
			return (-1);
	}

	close(fd);

	return (1);
}
