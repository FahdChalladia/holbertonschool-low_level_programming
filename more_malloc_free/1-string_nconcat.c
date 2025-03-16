#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory that contains
 *         s1 followed by the first n bytes of s2 and a null terminator.
 *         If the function fails, NULL is returned.
 *         If NULL is passed for s1 or s2, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1, len_s2, i;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len_s1 = strlen(s1);
len_s2 = strlen(s2);
if (n >= len_s2)
n = len_s2;
result = malloc(len_s1 + n + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
result[i] = s1[i];
for (i = 0; i < n; i++)
result[len_s1 + i] = s2[i];
result[len_s1 + n] = '\0';
return (result);
}
