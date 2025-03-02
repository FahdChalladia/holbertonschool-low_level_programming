#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of characters to copy.
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
