#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - Prints an error message and exits with a specific code
 * @exit_code: Exit status code
 * @format: Format string for dprintf
 * @arg: Argument for format string
 */
void print_error(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or exits with codes 97 to 100 on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes, write_bytes;
char buffer[1024];
if (argc != 3)
print_error(97, "Usage: cp %s %s\n", "file_from file_to");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", argv[1]);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}
while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes != read_bytes)
{
close(fd_from);
close(fd_to);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}
}
if (read_bytes == -1)
{
close(fd_from);
close(fd_to);
print_error(98, "Error: Can't read from file %s\n", argv[1]);
}
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
