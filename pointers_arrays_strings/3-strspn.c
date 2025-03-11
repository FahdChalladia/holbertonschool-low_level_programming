#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: pointer to the input string
 * @accept: pointer to characters to match
 * Return: Number of bytes in s consisting of only accept chars
 */



unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
while (s[j] != '\0')
{
if (_strchr(accept, s[j]) == NULL)
return (j);
j++;
}
return (j);
}

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string
 * @c: character to find
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);
i++;
}
if (c == '\0')
return (&s[i]);
return (NULL);
}
