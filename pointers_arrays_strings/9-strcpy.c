#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 * to the buffer pointed to by dest.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to copy.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
