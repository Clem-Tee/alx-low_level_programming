#include "main.h"

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
