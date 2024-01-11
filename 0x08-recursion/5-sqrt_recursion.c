#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Integer input
 * @val: square root
 * Return: Integer square
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - find square root
 * @n: Integer
 * @val: Square root
 * Return: Integer.
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
