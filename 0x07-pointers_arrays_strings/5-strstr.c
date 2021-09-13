#include "main.h"

/**
 * _strstr - searches string for a substring
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
