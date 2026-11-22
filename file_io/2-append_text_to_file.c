#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path of the file to append
 * @text_content: string to append
 *
 * Return:  * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		if (close(fd) == -1)
		{
			return (-1);
		}
		return (1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}
	bytes_written = write(fd, text_content, i);

	if (bytes_written != i)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
