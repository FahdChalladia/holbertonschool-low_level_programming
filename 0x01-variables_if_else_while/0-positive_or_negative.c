#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Determines if a number is positive, zero, or negative
* Description: This program generates a random number,
* checks whether it is positive, negative, or zero,
* and prints the result.
*
* Return: 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
