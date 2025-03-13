#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a duplicate of the given string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL.
 */
char *_strdup(char *str)
{
char *array;
int i = 0, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
array = malloc((length + 1) * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < length; i++)
array[i] = str[i];
array[i] = '\0';
return (array);
}
