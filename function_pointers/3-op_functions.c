#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of a divided by b.
 *         If b is 0, return 0 (division by zero error).
 */
int op_div(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The remainder of a divided by b.
 *         If b is 0, return 0 (modulo by zero error).
 */
int op_mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
