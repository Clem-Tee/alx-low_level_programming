#include "main.h"

/**
 * leet - encode
 * @s: pointer to char params
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char l[] = "ol_ea_t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[j] == (l[j] - 32))
			{
				s[i] = j + 'o';
			}
		}
	}
	return (s);
}
