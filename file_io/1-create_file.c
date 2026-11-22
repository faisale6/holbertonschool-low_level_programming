#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: path of file to create
 * @text_content: string to write
 *
 * Return: either return 1 (Success) or -1 (failiure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
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
