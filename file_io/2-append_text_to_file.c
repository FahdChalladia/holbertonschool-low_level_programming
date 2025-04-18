#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: pointer to the filename
 * @text_content: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytesWritten;
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
bytesWritten = write(fd, text_content, strlen(text_content));
if (bytesWritten == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
