#include "main.h"

/**
 *puts_half  - prints half of a string, followed by a new line.
 *
 *@str: String parametre input.
 *
 *Return: Nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar('\n');
}
