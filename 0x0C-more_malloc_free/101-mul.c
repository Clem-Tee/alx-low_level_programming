#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    if (!onlyNumbers(argv[1]) || !onlyNumbers(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    multiply(num1, num2);

    return 0;
}

/**
 * onlyNumbers - Checks if a string contains only digits
 * @c: The string to be checked
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int onlyNumbers(char *c)
{
    int i;

    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] < '0' || c[i] > '9')
            return 0;
    }

    return 1;
}

/**
 * multiply - Multiplies two positive numbers
 * @s1: First number as a string
 * @s2: Second number as a string
 */
void multiply(char *s1, char *s2)
{
    int len1, len2, total_len, i, j, carry, n1, n2, sum;
    int *result;

    len1 = _strlen(s1);
    len2 = _strlen(s2);
    total_len = len1 + len2;

    result = _calloc(total_len, sizeof(int));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = s1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = s2[j] - '0';

            sum = carry + result[i + j + 1] + (n1 * n2);
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }

        if (carry > 0)
            result[i + j + 1] += carry;
    }

    for (i = 0; i < total_len; i++)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s)
    {
        len++;
        s++;
    }

    return len;
}

/**
 * _calloc - Allocates memory for an array using malloc and initializes it to 0
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    for (i = 0; i < nmemb * size; i++)
        ptr[i] = 0;

    return ptr;
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return putchar(c);
}

