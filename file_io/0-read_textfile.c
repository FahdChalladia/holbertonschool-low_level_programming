#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: pointer to the filename
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t bytesRead, bytesWritten;
int fd;
if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(fd);
return (0);
}
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten != bytesRead)
{
free(buffer);
close(fd);
return (0);
}
close(fd);
free(buffer);
return (bytesRead);
}
