#include "main.h"

/**
 * factorial - Returns factoriel of a number
 * @n: the number
 *
 * Return: the factoriel
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
