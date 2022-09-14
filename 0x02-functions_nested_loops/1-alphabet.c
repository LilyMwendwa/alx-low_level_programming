#include "main.h"

/**
 * Prints alphabet-prints alphabet in lower case
 *
 * Return: zero
 */
void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return (0);
}

