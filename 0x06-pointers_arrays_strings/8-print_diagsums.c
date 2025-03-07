#include "main.h"

/**
 * print_number - Helper function to print an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}

print_number(sum1);
_putchar(',');
_putchar(' ');
print_number(sum2);
_putchar('\n');
}
