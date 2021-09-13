#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to check
 * @accept: bytes composing prefix
 *
 * Return: integer length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
