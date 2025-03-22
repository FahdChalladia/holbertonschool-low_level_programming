#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - Prints anything, based on a format string.
* @format: A string containing the types of arguments passed to the function.
*           'c' for char, 'i' for int, 'f' for float, 's' for string.
*           If a string is NULL, it prints "(nil)".
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
va_list args;
int first = 1;

if (format == NULL)
{
printf("\n");
return;
}

va_start(args, format);

while (format[i])
{
if (!first)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int)); /* char is promoted to int */
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
first = 0;
i++;
}

va_end(args);
printf("\n");
}
