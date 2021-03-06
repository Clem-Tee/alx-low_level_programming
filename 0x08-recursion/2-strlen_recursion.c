#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: the string to measure
 *
 * Return: the integer length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
