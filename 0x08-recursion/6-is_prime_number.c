#include "main.h"
#include <stdio.h>

/**
 *is_prime_number -  function that returns 1
 *		if the input integer is a prime number,
 *			 otherwise return 0.
 *@m: Integer
 *@n: Integer
 *Return: 0 or 1.
 */
int check_prime(int n, int m);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 *check_prime - check all the numbers.
 *@m: int
 *@n: int
 *Return: int
 */
int check_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, m + 1));
}
