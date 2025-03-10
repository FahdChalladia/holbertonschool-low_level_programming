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
int i;
for (i = 0; i < argc ; i++)
{
printf("%s \n", argv[i]);
}
return (0);
}
