#include "main.h"

/**
 *_isdigit - check the code.
 *
 *@c: input a number between 0 and 9.
 *
 *Return: 1 if c is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}



