
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_file - Closes a file descriptor
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Copies data between files
 * @from: Source file descriptor
 * @to: Destination file descriptor
 * @source: Source filename
 * @destination: Destination filename
 */
void copy_content(int from, int to, char *source, char *destination)
{
	char buffer[1024];
	ssize_t nread, nwritten, total;

	while ((nread = read(from, buffer, 1024)) > 0)
	{
		total = 0;
		while (total < nread)
		{
			nwritten = write(to, buffer + total, nread - total);
			if (nwritten <= 0)
			{
				dprintf(2, "Error: Can't write to %s\n", destination);
				exit(99);
			}
			total += nwritten;
		}
	}
	if (nread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		exit(98);
	}
}

/**
 * main - Copies one file to another
 * @argc: Argument count
 * @argv: Argument values
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
