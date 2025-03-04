#include "main.h"
/**
 * _memcpy - take from src to dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: how much it gonna take
 * Return: pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
for (j = 0 ; src[j] != "\0" && j < n ; j++)
{
dest[j] = src[j];
}

return (dest);
}
