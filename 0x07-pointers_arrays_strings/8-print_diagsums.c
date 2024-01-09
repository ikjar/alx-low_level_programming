#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals
 *			of a square matrix of integers.
 *@a: Tow dimenssion array of integer type.
 *@size: size of array integer
 */

void print_diagsums(int *a, int size)
{
	int i, c1 = 0, c2 = 0;

	for (i = 0; i < size; i++)
	{
		c1 += a[i];
		c2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
