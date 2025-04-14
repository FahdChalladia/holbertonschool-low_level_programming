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
char buffer[1024];
ssize_t bytesRead;
int fd;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
return (0);
}
close(fd);
return (0);
}
