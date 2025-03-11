#include <stdio.h>
/**
*main - Prints all the numbers of base 16 in lowercase
*Return: 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
}
for (num = 97; num < 103; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
