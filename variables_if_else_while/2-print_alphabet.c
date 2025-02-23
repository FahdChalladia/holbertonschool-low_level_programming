#include <stdio.h>

/**
* main - Prints the alphabet in lowercase
*
* Description: This program prints the alphabet from 'a' to 'z'
* using only the putchar function, and it uses putchar twice in total.
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
putchar('\n');

return (0);
}
