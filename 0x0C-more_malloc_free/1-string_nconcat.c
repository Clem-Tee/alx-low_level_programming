#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: copy first n bytes of s2
 *
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *r;
	unsigned int 11,12;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	11 = _strlen(s1);
	12 = _strlen(s2);

	12 = 12 > n ? n : 12;
	r = s = malloc(11 + 12 + 1);
	if (!s)
		return (NULL);
	while (*s1)
		*s++ = *s1++;
	while (12--)
		*s++ = *s2++;
	*s = '\0';
	return (r);
}
