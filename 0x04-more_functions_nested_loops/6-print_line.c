#include <mai.h>

/**
 * print_line - print line of variable length
 * @n: lenth of line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
