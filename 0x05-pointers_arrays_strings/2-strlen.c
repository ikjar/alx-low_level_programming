#include "main.h"

/**
 *_strlen - returns the length of string.
 *
 * @s:string parametre input
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
