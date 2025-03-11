#include "main.h"

/**
 * _pow_recursion - Returns x pow y
 * @x: the number
 * @y: the pow number
 * Return: value of x pow y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x,  y - 1));
}
