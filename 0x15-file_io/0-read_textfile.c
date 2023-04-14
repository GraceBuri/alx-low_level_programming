#include <stdlib.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to POSIX standard output.
* @filename: Pointer to the name of the file.
* @letters: The number of letters to read and print.
*
* Return: Number of letters it can read and print, or 0 if the function fails.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, t, w;
char *buf;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);

return (w);
}
