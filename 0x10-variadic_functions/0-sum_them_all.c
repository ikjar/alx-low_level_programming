#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The number of arguments
 * @...: unknown integers to sum.
 * Return: The integer sum.
 *		If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list po;

	if (!n)
		return (0);
	va_start(po, n);
	while (i--)
		s += va_arg(po, int);
	va_end(po);
	return (s);
}
