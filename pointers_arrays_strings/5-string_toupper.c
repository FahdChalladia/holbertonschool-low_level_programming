#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be modified.
 *
 * Return: The modified string.
 */
char *string_toupper(char *str)
{
int i = 0;
while (s[i] != '\0')
if (str[i] >= 'a' && str[i] <= 'z')
*str[i] -= 32;
i++;
return (*str);
}
