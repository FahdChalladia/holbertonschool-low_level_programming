#include "main.h"

/**
 * array_range - Creates an array of integers from min to max, inclusive.
 * @min: The first integer in the array.
 * @max: The last integer in the array.
 *
 * Return: A pointer to the newly created array, or NULL.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
