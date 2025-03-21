#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings-prints strings, followed by a new line
*@separator:string to be printed between the strings
*@n:number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
