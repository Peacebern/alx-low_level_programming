#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* 'ap' here stands for arguement parameter */

	va_start(ap, n);
	unsigned int i, sum;
	i = 0;
	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return sum;
}
