#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
 * main - Copies content from one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exits with codes 97–100 on error.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, r, w;
char buf[BUF_SIZE];
if (argc != 3)
{
dprintf(2, "Usage: cp %s %s\n", "file_from", "file_to");
exit(97);
}
file_descriptors_t fds = open_files(argv[1], argv[2]);
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99);
while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
{
w = write(fd_to, buf, r);
if (w != r)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd_from), close(fd_to);
exit(99);
}
}
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(fd_from), close(fd_to);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}

/**
 * open_files - Opens source and destination files with proper permissions
 * @file_from: name of the source file to read from
 * @file_to: name of the destination file to write to
 *
 * Return: struct containing both file descriptors
 * If an error occurs, exits with code 98 or 99 and prints an error message
 */
file_descriptors_t open_files(const char *file_from, const char *file_to)
{
file_descriptors_t fds;
fds.from = open(file_from, O_RDONLY);
if (fds.from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
exit(98);
}
fds.to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fds.to == -1)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
close(fds.from);
exit(99);
}
return (fds);
}
