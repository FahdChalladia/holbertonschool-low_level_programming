#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers.
 * @n: the number of elements in the array.
 * Return: nothing.
*/
void reverse_array(int *a, int n)
{
int c[n];
int j = 0;
for (int i = n - 1; i >= 0; i--)
{
c[j] = a[i];
j++;
}
for (int i = 0; i < n; i++)
{
a[i] = c[i];
}
}
