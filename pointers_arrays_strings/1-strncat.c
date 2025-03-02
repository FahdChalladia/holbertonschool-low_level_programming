#include "main.h"
/**
 * _strncat- concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: how much we want from src
 * Return: pointer to the destination string
 */
 char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int n2 =0 ;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' &&  n2<n)
{
dest[i] = src[j];
i++;
j++;
n2++;
}
dest[i] = '\0';
return (dest);
}
