#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Return: the integer value of the string.
 */
int _atoi(char *s)
{
int num = 0;
int sign = 1;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
sign *= 1;
else if (*s >= '0' && *s <= '9')
break;
s++;
}
while (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
s++;
}
return (num *sign);
}
