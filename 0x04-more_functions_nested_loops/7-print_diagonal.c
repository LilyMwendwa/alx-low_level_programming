#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- draws diagonal line on the terminal
 * @n: the no. of times character printed
 *
 * Return: zero
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
	for (len = 0; len < n; len++)
	{
	for (space = 0; space < n; space++)
	{
		putchar('_');
	}
	putchar('\\');

		if (len == (n - 1))
		{
		continue;
		}
	putchar('\n');
	}
	}
	putchar('\n');
}
