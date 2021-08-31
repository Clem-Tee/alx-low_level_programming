#include "notrebloh.h"

/**
 * print_alphabet_x10 - print list of aphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}
