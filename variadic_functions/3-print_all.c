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
unsigned int i;
i = 0;
char *str;
va_list args;
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
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
printf("%s", (str == NULL) ? "(nil)" : str);
break;
}
if (format[i + 1])
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}
