/*
 * File: 3-print_alphabets.c
 * Auth: Clement Ogol
 */

#include <stdio.h>

/**
 * main - Prints te alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
