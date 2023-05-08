#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @file: A pointer to the name of the file.
* @text: The string to add to the end of the file.
*
* Return: If the function fails or filename is NULL - -1.
*         If the file does not exist the user lacks write permissions - -1.
*         Otherwise - 1.
*/
int append_text_to_file(const char *file, char *text)
{
int fd, wr, len = 0;

if (file == NULL)
return (-1);

if (text != NULL)
{
for (len = 0; text[len]; len++)
;
}

fd = open(file, O_WRONLY | O_APPEND);
wr = write(fd, text, len);

if (fd == -1 || wr == -1)
return (-1);

close(fd);

return (1);
}
