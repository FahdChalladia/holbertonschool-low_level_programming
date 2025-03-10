#include "main.h"

/**
 * print_number - prints an integer to stdout using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}


/**
 * main - Entry point of the program
 *
 * This function prints the program name followed by a newline.
 * @argc: The number of command-line arguments (unused)
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void)argv;
print_number(argc - 1);
_putchar('\n');
return (0);
}
