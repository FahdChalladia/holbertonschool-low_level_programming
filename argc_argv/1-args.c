#include "main.h"

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
