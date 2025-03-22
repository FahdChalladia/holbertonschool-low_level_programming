#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_all-prints anything
*@format:format string containing types of arguments
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
va_list args;

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
printf("%c", va_arg(args, int)); /* char is promoted to int */
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || 
format[i] == 'f' || format[i] == 's'))
printf(", ");

i++;
}

va_end(args);
printf("\n");
}
