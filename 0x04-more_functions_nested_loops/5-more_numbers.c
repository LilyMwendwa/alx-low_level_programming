#include "main.h"

/**
 * more_numbers- Prints 10 times the number from 0 to 14
 *
 * Return:zero
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}
