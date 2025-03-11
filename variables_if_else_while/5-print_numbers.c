#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Description: This program prints all single digit numbers from 0 to 9,
* followed by a new line.
*
* Return: 0 (Success)
*/
int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
