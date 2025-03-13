#include "main.h"

/**
 * str_concat - Returns a pointer to a newly allocated space in memory
 * @s1: 1st string
 * @s2: 2nd string
 * Return: A pointer to the duplicated string, or NULL.
 */
char *str_concat(char *s1, char *s2)

{
char *array;
int i = 0, j = 0, c = 0, k, l, m;
if (s1 == NULL || s2 == NULL)
return (NULL);
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
c = i + j;
array = malloc(c* sizeof(char));
m = 0;
for (k = 0 ; k<i ; k++)
{
    array[m]=s1[k];
    m++;
}
for (l = 0 ; l<j ; j++)
{
    array[m]=s2[l];
    m++;
}
array[i] = '\0';
return (array);
}
