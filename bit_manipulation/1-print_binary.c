#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
int i;
int started = 0;
char bit;
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
if ((n >> i) & 1)
{
bit = '1';
started = 1;
}
else if (started)
{
bit = '0';
}
else
{
continue;
}
write(1, &bit, 1);
}
if (!started)
{
bit = '0';
write(1, &bit, 1);
}
}
