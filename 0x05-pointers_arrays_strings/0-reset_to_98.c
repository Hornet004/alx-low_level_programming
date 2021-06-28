#include "holberton.h"
#include <stdio.h>

/**
 *reset_to_98 - update value the pointer point to
 *@n: pointer
 *Return: Void
*/

void reset_to_98(int *n)
{
int m = 98;
*n = &m;
printf("n = %d", n);
return (0);
}
