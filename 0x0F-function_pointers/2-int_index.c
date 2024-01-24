#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *
 *@array: the integer array.
 *@size: the array size.
 *@cmp: the compare function.
 *
 *Return: the integer index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
