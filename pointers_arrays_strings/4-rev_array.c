#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: the array of integers.
* @n: the number of elements in the array.
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int temp;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
