#include "function_pointers.h"


/**
 * array_iterator - Executes a function given as a parameter on an array.
 * @array: The array to be iterated over.
 * @size: The size of the array.
 * @action: A pointer to the function that will be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
