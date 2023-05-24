#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, sum, carry;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = 0;
	while (argv[1][len1] != '\0')
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}

	len2 = 0;
	while (argv[2][len2] != '\0')
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);
	return (0);
}

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

