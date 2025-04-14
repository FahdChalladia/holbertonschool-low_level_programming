#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         Returns 0 if the file can't be opened or read,
 *         if filename is NULL, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
free(buffer);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w == -1 || w != r)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (w);
}
