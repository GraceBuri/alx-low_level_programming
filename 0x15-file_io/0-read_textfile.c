#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fd, t, w;
    char *buf;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }

    buf = malloc(sizeof(char) * letters);
    t = read(fd, buf, letters);
    w = write(STDOUT_FILENO, buf, t);

    free(buf);
    close(fd);

    return w;
}
