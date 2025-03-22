#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as a string
 *
 * Return: A pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
if (*s == '+')
return (op_add);
if (*s == '-')
return (op_sub);
if (*s == '*')
return (op_mul);
if (*s == '/')
return (op_div);
if (*s == '%')
return (op_mod);
return (NULL);
}
