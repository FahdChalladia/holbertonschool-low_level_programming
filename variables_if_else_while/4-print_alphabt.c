#include <stdio.h>

/**
* main - Prints the alphabet excluding 'q' and 'e'
*
* Description: This program prints the alphabet in lowercase, excluding
* the letters 'q' and 'e', using only the putchar function, with two
* calls to putchar.
*
* Return: 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');

return (0);
}
