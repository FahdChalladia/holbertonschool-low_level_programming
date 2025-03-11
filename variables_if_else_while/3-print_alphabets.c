#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and uppercase
*
* Description: This program prints the alphabet in lowercase followed
* by the alphabet in uppercase, using only the putchar function.
*
* Return: 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
