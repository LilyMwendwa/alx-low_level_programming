#include "main.h"

/**
 * print_numbers-prints from 0 to 9
 *
 * Return: zero
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	_putchar(num, +'0');
	}
_putchar('\n');
}
