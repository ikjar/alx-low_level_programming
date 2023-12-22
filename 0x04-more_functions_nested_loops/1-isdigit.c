#include "main.h"

/**
 *_isdigit - check the code
 *
 *@c: input numbers between 0 to 9
 *
 *Return: 1 if c is a digit, o if not
*/

int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}
