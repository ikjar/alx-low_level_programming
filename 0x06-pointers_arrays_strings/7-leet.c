#include "main.h"
/**
 *leet - function that encodes a string into 1337.
 *@c: String
 *Return: String that is encoded
*/

char *leet(char *c)
{
	char *cp = c;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*c == letters[i] || *c == letters[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++
	}
	return (cp);
}
