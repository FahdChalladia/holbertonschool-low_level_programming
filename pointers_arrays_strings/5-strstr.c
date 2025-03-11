#include "main.h"
#include <stddef.h>


/**
 * _strstr - Locates a string in a string
 * @haystack: pointer to the string
 * @needle: pointer  to the key string
 * Return: pointer to first occurrence of c, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
if (!*needle)
return (haystack);
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (!*n)
return (haystack);
haystack++;
}
return (NULL);
}
