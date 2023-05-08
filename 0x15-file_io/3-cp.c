#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    int fd_read, fd_write, read_bytes, close_read, close_write;
    char buffer[BUFSIZ];

    /* Check if correct number of arguments are provided */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open source file for reading */
    fd_read = open(argv[1], O_RDONLY);
    if (fd_read < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Open destination file for writing */
    fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    /* Read from source and write to destination until end of file */
    while ((read_bytes = read(fd_read, buffer, BUFSIZ)) > 0)
    {
        if (fd_write < 0 || write(fd_write, buffer, read_bytes) != read_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_read);
            exit(99);
        }
    }

    /* Handle errors during read operation */
    if (read_bytes < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Close file descriptors */
    close_read = close(fd_read);
    close_write = close(fd_write);

    /* Handle errors during closing of file descriptors */
    if (close_read < 0 || close_write < 0)
    {
        if (close_read < 0)
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
        if (close_write < 0)
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
        exit(100);
    }

    return (0);
}
