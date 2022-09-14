#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Prints natural numbers from n to 98
 * @n: the number to begin counting at.
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i == 98)
		{
		printf("%d\n", i);
		}
		else
		{
		printf("%d, ", i);
		}
	}
	}
	else if (n > 98)
	{
	for (i = n; i >= 98; i--)
	{
		if (i == 98)
	{
		printf("%d\n", i);
		}
		else
		{
		printf("%d, ", i);
		}
	}
	}
	else
	{
	printf("%d\n", n);
	}
}
