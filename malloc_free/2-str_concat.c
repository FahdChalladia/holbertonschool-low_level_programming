#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory
 * @s1: First string (can be NULL)
 * @s2: Second string (can be NULL)
 * Return: Pointer to new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *array;
int i = 0, j = 0, k, l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
array = malloc((i + j + 1) * sizeof(char));
if (array == NULL)
return (NULL);
for (k = 0; k < i; k++)
array[k] = s1[k];
for (l = 0; l < j; l++)
array[k + l] = s2[l];
array[i + j] = '\0';
return (array);
}
