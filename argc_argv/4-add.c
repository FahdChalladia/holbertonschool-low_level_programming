#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string consists only of digits
 * @str: The string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_number(char *str)
{
int i = 0;
if (str[i] == '\0')
return (0);
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if an invalid argument is found
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
