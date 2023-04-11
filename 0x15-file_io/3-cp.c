#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int copy_file(const char *file_from, const char *file_to);

/**
 * copy_file - Copies the contents of a file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: If the function fails:
 *         - 98 if file_from does not exist or cannot be read.
 *         - 99 if file_to cannot be created or written to.
 *         - 100 if file_to or file_from cannot be closed.
 *         Otherwise - 0.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	/* Open source file for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	/* Open destination file for writing, truncating if it exists */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}

	/* Copy contents from source file to destination file */
	do {
		r = read(fd_from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			return (98);
		}

		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	} while (r > 0);

	/* Close source and destination files */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close files %s %s\n", file_from, file_to);
		return (100);
	}

	return (0);
}
