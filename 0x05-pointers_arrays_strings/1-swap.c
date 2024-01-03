#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *
 *@a: Integer parametre
 *@b: Integer parametre
 *
 *Return: NOthing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
