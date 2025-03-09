/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
static int i;
i = 0;
if (n < 0)
return (-1);
if (_pow_recursion(i, 2) > n)
return (-1);
if (_pow_recursion(i, 2) == n)
return (i);
i++;
return (_sqrt_recursion(n));
}
