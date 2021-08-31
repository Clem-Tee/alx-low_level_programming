#include "main.h"

/**
 * main - Entry Point.use only defined variable to create output.
 *
 * Description: Print notrebloh using predefined functions
 *
 * Return: 0
 */

int main(void)
{
	char h[] = "Holberton";
	int m;

	m = 0;

	while (m <= 8)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}
