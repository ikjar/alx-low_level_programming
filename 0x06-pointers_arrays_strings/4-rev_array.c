#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *
 *@a: an array of integers
 *@n: the number of elements of the array
 *Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
