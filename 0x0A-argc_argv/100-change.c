#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, n, c = 0, COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);
	if (n < 0)
		return (puts("0"), 1);
	for (i = 0; i < 5; i++)
		if (n / COINS[i])
		{
			c += n / COINS[i];
			n %= COINS[i];
		}
	printf("%d\n", c);
	return (0);
}
