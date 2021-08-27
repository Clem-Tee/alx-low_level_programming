/*
 * File: 100-print_comb3.c
 * Auth: Clement Ogol
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the numbers from 00 to 99, numbers separated by
 *	  a comma followed by a space, in ascending order
 * 
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 100; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
} 
