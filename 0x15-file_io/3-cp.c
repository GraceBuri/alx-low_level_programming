#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	int fr, fw, r, cr, cw;
	char b[BUFSIZ];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fr = open(argv[1], O_RDONLY), fr < 0 ? dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]), exit(98) : 0;

	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(fr, b, BUFSIZ)) > 0)
		if (fw < 0 || write(fw, b, r) != r)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]), close(fr), exit(99);

	r < 0 ? dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98) : 0;

	cr = close(fr), cw = close(fw);
	cr < 0 || cw < 0 ? cr < 0 ? dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fr) : dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fw), exit(100) : (void)cw;

	return (0);
}
