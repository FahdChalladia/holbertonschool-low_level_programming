#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
while (*str)
{
putc(*str, stdout);
str++;
}
putc('\n', stdout);
}
