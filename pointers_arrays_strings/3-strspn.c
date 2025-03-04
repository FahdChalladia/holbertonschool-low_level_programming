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
