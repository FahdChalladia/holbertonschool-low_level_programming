#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates a character in a string
 * @s: pointer to the string
 * @accept: character to find
 * Return: pointer to first occurrence of c, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
while (s[i] != '\0')
{
if (_strchr(accept, s[i]) != NULL)
return (&s[i]);
i++;
}
return (NULL);
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
