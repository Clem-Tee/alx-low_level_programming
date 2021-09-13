#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to first occurence of c in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
