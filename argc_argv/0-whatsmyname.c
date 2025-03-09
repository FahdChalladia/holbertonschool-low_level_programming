#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
char *program_name ;
*program_name = argv[0];
while (*program_name)
{
_putchar(*program_name);
program_name++;
}
_putchar('\n');
return (0);
}
