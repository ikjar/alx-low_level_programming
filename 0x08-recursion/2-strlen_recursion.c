#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion -  function that returns the length of a string.
 *@s: pointed to the string.
 *Return:The value of n.
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
