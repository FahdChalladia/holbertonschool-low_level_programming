#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - Computes the length of a string.
 * @str: The string to measure.
 * Return: Length of the string.
 */
int _strlength(char *str)
{
int len = 0;
while (str && str[len])
len++;
return (len);
}

/**
 * _strcopy - Copies a string to a newly allocated space.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: Pointer to the destination.
 */
char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * Return: Pointer to the new dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
int name_len, owner_len;

if (name == NULL || owner == NULL)
return (NULL);

name_len = _strlength(name);
owner_len = _strlength(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
_strcopy(name_copy, name);

owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
_strcopy(owner_copy, owner);

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog);
}
