#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: caracter
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
int i = 0;
bool test = false;
while (test == false && s[i] != '\0')
{
if (s[i] == c)
test = true;
else
i++;
}
if (test)
return (&s[i]);
else
return (NULL);
}
