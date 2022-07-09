#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: total number of parameters
 * Return: sum of value parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (sum);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
