#include "main.h"

/**
 * _memset - fills buffer with constant byte
 * @s: ponter to the buffer
 * @b: the constant byte
 * @n: size of buffer to fill
 *
 * Return: pointer to destination buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
