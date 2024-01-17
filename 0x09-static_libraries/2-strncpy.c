#include "main.h"

/**
 *_strncpy -  function that copies a string
 *
 *@dest: String parametre
 *@src: String parametre
 *@n: Integer parametre
 *
 *Return: deest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
